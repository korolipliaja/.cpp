#include <iostream>
#include <cmath>
#include <vector>
#include "raylib.h"
#include <stdlib.h> // For rand() and srand()
#include <time.h>   // For time()

struct Circle {
    Vector2 position;
    float radius;
    bool active;
};

int main() {
    const int screenWidth = 980;
    const int screenHeight = 980;

    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");

    Texture2D background = LoadTexture("/home/username/Pictures/background_petri.jpg");
    if (background.id == 0) {
        std::cerr << "Failed to load texture" << std::endl;
        return -1;
    }

    SetTargetFPS(60);

    std::vector<Circle> blueCircles;
    blueCircles.push_back({ { screenWidth / 2.0f, screenHeight / 2.0f }, 50.0f, true });

    const char* blueCircleName = "Blue Circle"; // Name for the blue circle
    int fontSize = 20; // Font size for the name

    // Red circles properties
    const int numRedCircles = 10;
    std::vector<Circle> redCircles(numRedCircles);

    // Green circle properties
    Circle greenCircle;
    greenCircle.radius = 25.0f;
    greenCircle.active = true;

    // Initialize random seed
    srand(time(NULL));
    for (int i = 0; i < numRedCircles; i++) {
        redCircles[i].position.x = (float)(rand() % screenWidth);
        redCircles[i].position.y = (float)(rand() % screenHeight);
        redCircles[i].radius = 25.0f;
        redCircles[i].active = true;
    }

    greenCircle.position.x = (float)(rand() % screenWidth);
    greenCircle.position.y = (float)(rand() % screenHeight);

    while (!WindowShouldClose()) {
        // Update
        Vector2 mousePosition = GetMousePosition();

        for (auto& blueCircle : blueCircles) {
            if (!blueCircle.active) continue;

            Vector2 direction = { mousePosition.x - blueCircle.position.x, mousePosition.y - blueCircle.position.y };
            float length = sqrt(direction.x * direction.x + direction.y * direction.y);

            if (length != 0.0f) {
                direction.x /= length;
                direction.y /= length;

                float step = 200.0f * GetFrameTime();

                if (step >= length) {
                    blueCircle.position = mousePosition; // Snap if very close
                } else {
                    blueCircle.position.x += direction.x * step;
                    blueCircle.position.y += direction.y * step;
                }
            }

            // Smoothly animate the radius change
            if (blueCircle.radius < blueCircle.radius) {
                blueCircle.radius += (blueCircle.radius - blueCircle.radius) * 0.1f; // Adjust the factor for smoothness
            } else if (blueCircle.radius > blueCircle.radius) {
                blueCircle.radius -= (blueCircle.radius - blueCircle.radius) * 0.1f; // Adjust the factor for smoothness
            }

            // Check for collision between blue and red circles
            for (int i = 0; i < numRedCircles; i++) {
                if (redCircles[i].active) {
                    float distance = sqrt(pow(blueCircle.position.x - redCircles[i].position.x, 2) + pow(blueCircle.position.y - redCircles[i].position.y, 2));
                    if (distance < blueCircle.radius + redCircles[i].radius) {
                        // Collision detected, set target radius and deactivate red circle
                        blueCircle.radius += redCircles[i].radius;
                        redCircles[i].active = false;
                    }
                }
            }

            // Check for collision between blue and green circle
            if (greenCircle.active) {
                float distance = sqrt(pow(blueCircle.position.x - greenCircle.position.x, 2) + pow(blueCircle.position.y - greenCircle.position.y, 2));
                if (distance < blueCircle.radius + greenCircle.radius) {
                    // Collision detected, decrease blue circle size and deactivate green circle
                    blueCircle.radius -= greenCircle.radius;
                    if (blueCircle.radius < 0) blueCircle.radius = 0; // Ensure radius doesn't go negative
                    greenCircle.active = false;
                }
            }
        }

        // Check for space key press to split the blue circles
        if (IsKeyPressed(KEY_SPACE)) {
            std::vector<Circle> newBlueCircles;
            for (auto& blueCircle : blueCircles) {
                if (blueCircle.active && blueCircle.radius > 10.0f) { // Minimum radius to split
                    float newRadius = blueCircle.radius / 2.0f;
                    newBlueCircles.push_back({ { blueCircle.position.x + newRadius, blueCircle.position.y }, newRadius, true });
                    newBlueCircles.push_back({ { blueCircle.position.x - newRadius, blueCircle.position.y }, newRadius, true });
                    blueCircle.active = false;
                }
            }
            blueCircles.insert(blueCircles.end(), newBlueCircles.begin(), newBlueCircles.end());
        }

        // Draw
        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawTexture(background, 0, 0, WHITE);

        for (const auto& blueCircle : blueCircles) {
            if (blueCircle.active) {
                DrawCircleV(blueCircle.position, blueCircle.radius, BLUE);

                // Draw the name on top of the blue circle
                Vector2 textSize = MeasureTextEx(GetFontDefault(), blueCircleName, fontSize, 1);
                Vector2 textPosition = { blueCircle.position.x - textSize.x / 2, blueCircle.position.y - textSize.y / 2 };
                DrawText(blueCircleName, textPosition.x, textPosition.y, fontSize, WHITE);
            }
        }

        for (int i = 0; i < numRedCircles; i++) {
            if (redCircles[i].active) {
                DrawCircleV(redCircles[i].position, redCircles[i].radius, RED);
            }
        }
        if (greenCircle.active) {
            DrawCircleV(greenCircle.position, greenCircle.radius, GREEN);
        }
        EndDrawing();
    }

    UnloadTexture(background);
    CloseWindow();

    return 0;
}
