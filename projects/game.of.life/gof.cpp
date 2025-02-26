#include "raylib.h"
#include <vector>

const int CELL_SIZE = 20;
const int WIDTH = 40;
const int HEIGHT = 30;
const int SCREEN_WIDTH = WIDTH * CELL_SIZE;
const int SCREEN_HEIGHT = HEIGHT * CELL_SIZE;

void updateGrid(std::vector<std::vector<int>>& grid) {
    std::vector<std::vector<int>> newGrid(HEIGHT, std::vector<int>(WIDTH, 0));
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            int neighbors = 0;
            for (int i = -1; i <= 1; i++) {
                for (int j = -1; j <= 1; j++) {
                    if (i == 0 && j == 0) continue;
                    int nx = x + j, ny = y + i;
                    if (nx >= 0 && nx < WIDTH && ny >= 0 && ny < HEIGHT) {
                        neighbors += grid[ny][nx];
                    }
                }
            }
            if (grid[y][x] == 1) {
                if (neighbors == 2 || neighbors == 3) {
                    newGrid[y][x] = 1; // Stays alive
                }
            } else {
                if (neighbors == 3) {
                    newGrid[y][x] = 1; // Becomes alive
                }
            }
        }
    }
    grid = newGrid;
}

int main() {
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Game of Life with Raylib");
    SetTargetFPS(10);
    
    std::vector<std::vector<int>> grid(HEIGHT, std::vector<int>(WIDTH, 0));
    grid[10][10] = grid[11][11] = grid[12][9] = grid[12][10] = grid[12][11] = 1;
    
    while (!WindowShouldClose()) {
        Vector2 mousePosition = GetMousePosition();
        int mouseX = mousePosition.x / CELL_SIZE;
        int mouseY = mousePosition.y / CELL_SIZE;
        
        if (IsMouseButtonDown(MOUSE_LEFT_BUTTON) && mouseX >= 0 && mouseX < WIDTH && mouseY >= 0 && mouseY < HEIGHT) {
            grid[mouseY][mouseX] = 1; // Allow drawing new cells with the mouse
        }
        if (IsMouseButtonDown(MOUSE_RIGHT_BUTTON) && mouseX >= 0 && mouseX < WIDTH && mouseY >= 0 && mouseY < HEIGHT) {
            grid[mouseY][mouseX] = 0; // Allow erasing cells with the mouse
        }
        
        updateGrid(grid);
        
        BeginDrawing();
        ClearBackground(BLACK);
        for (int y = 0; y < HEIGHT; y++) {
            for (int x = 0; x < WIDTH; x++) {
                if (grid[y][x]) {
                    DrawRectangle(x * CELL_SIZE, y * CELL_SIZE, CELL_SIZE, CELL_SIZE, WHITE);
                }
            }
        }
        EndDrawing();
    }
    CloseWindow();
    return 0;
}
