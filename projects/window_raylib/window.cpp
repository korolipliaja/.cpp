#include <iostream>
#include <cmath>
#include "raylib.h"
//test

int main() {
    const int screenWidth = 980;
    const int screenHeight = 980;

    InitWindow(screenWidth, screenHeight, "petri_dish");

    Texture2D background = LoadTexture("/home/username/Pictures/background_petri.jpg");
    if (background.id == 0) {
        std::cerr << "Failed to load texture" << std::endl;
        return -1;
    }

    SetTargetFPS(60);

    Vector2 circlePosition = { screenWidth / 2.0f, screenHeight / 2.0f };
    float speed = 200.0f; // Speed of the circle in pixels per second
    float currentSpeed = speed; // Variable speed for smooth stopping
    const float threshold = 50.0f; // Distance to start slowing down (same as circle radius)
    const float slowFactor = 5.0f; // Higher values = smoother deceleration

    while (!WindowShouldClose()) {
        Vector2 mousePosition = GetMousePosition();
        Vector2 direction = { mousePosition.x - circlePosition.x, mousePosition.y - circlePosition.y };

        float length = sqrt(direction.x * direction.x + direction.y * direction.y);

        if (length > 0.1f) { // Avoid division by zero
            direction.x /= length;
            direction.y /= length;
            
            if (length < threshold) {
                // Smoothly reduce speed when close to the cursor
                currentSpeed = speed * (length / threshold);
            } else {
                currentSpeed = speed; // Restore full speed
            }

            float step = currentSpeed * GetFrameTime();
            
            if (step >= length) {
                circlePosition = mousePosition; // Snap if very close
            } else {
                circlePosition.x += direction.x * step;
                circlePosition.y += direction.y * step;
            }
        }

        // Draw
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawTexture(background, 0, 0, WHITE);
        DrawCircleV(circlePosition, 50, BLUE);
        EndDrawing();
    }

    UnloadTexture(background);
    CloseWindow();

    return 0;
}
