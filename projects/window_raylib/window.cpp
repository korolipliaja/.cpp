#include <iostream>
#include <cmath>
#include "raylib.h"

int main(){
    const int screenWidth = 980;
    const int screenHeight = 980;

    InitWindow(screenWidth, screenHeight, "petri_dish");

    Texture2D background = LoadTexture("/home/username/Pictures/background_petri.jpg");

    SetTargetFPS(60);            

    Vector2 circlePosition = { screenWidth / 2.0f, screenHeight / 2.0f };
    float speed = 200.0f; // Speed of the circle in pixels per second

    while (!WindowShouldClose()) 
    {
        Vector2 mousePosition = GetMousePosition();

        Vector2 direction = { mousePosition.x - circlePosition.x, mousePosition.y - circlePosition.y };

        float length = sqrt(direction.x * direction.x + direction.y * direction.y);
        if (length != 0) {
            direction.x /= length;
            direction.y /= length;
        }

        circlePosition.x += direction.x * speed * GetFrameTime();
        circlePosition.y += direction.y * speed * GetFrameTime();

        BeginDrawing();
            ClearBackground(RAYWHITE); 

            DrawTexture(background, 0, 0, WHITE);

            DrawCircleV(circlePosition, 20, BLUE);

        EndDrawing();
    }

    UnloadTexture(background);

    CloseWindow();

    return 0;
}