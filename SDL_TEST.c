#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>

#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 800
#define TILE_SIZE 100

const char* king_image_path = "C:\\Users\\USER\\source\\repos\\TEST_SDL\\TEST_SDL\\king.png"; // 킹 이미지 파일 경로

void close(SDL_Window* window, SDL_Renderer* renderer, SDL_Texture* texture) {
    SDL_DestroyTexture(texture);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    IMG_Quit();
    SDL_Quit();
}

int main(int argc, char* args[]) {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
        return 1;
    }

    if (!IMG_Init(IMG_INIT_PNG)) {
        printf("SDL_image could not initialize! IMG_Error: %s\n", IMG_GetError());
        SDL_Quit();
        return 1;
    }

    SDL_Window* window = SDL_CreateWindow("SDL2 Chess King", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WINDOW_WIDTH, WINDOW_HEIGHT, SDL_WINDOW_SHOWN);
    if (window == NULL) {
        printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
        IMG_Quit();
        SDL_Quit();
        return 1;
    }

    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (renderer == NULL) {
        printf("Renderer could not be created! SDL_Error: %s\n", SDL_GetError());
        SDL_DestroyWindow(window);
        IMG_Quit();
        SDL_Quit();
        return 1;
    }

    SDL_Texture* kingTexture = NULL;
    SDL_Surface* loadedSurface = IMG_Load(king_image_path);
    if (loadedSurface == NULL) {
        printf("Unable to load image %s! IMG_Error: %s\n", king_image_path, IMG_GetError());
        close(window, renderer, kingTexture);
        return 1;
    }
    kingTexture = SDL_CreateTextureFromSurface(renderer, loadedSurface);
    SDL_FreeSurface(loadedSurface);

    int quit = 0;
    SDL_Event e;

    while (!quit) {
        while (SDL_PollEvent(&e) != 0) {
            if (e.type == SDL_QUIT) {
                quit = 1;
            }
        }

        SDL_RenderClear(renderer);

        // Draw chessboard
        for (int row = 0; row < 8; row++) {
            for (int col = 0; col < 8; col++) {
                SDL_Rect tileRect = { col * TILE_SIZE, row * TILE_SIZE, TILE_SIZE, TILE_SIZE };
                if ((row + col) % 2 == 0) {
                    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
                }
                else {
                    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
                }
                SDL_RenderFillRect(renderer, &tileRect);
            }
        }

        // Draw the king piece at a specific position (example: e1 square)
        SDL_Rect kingRect = { 4 * TILE_SIZE, 7 * TILE_SIZE, TILE_SIZE, TILE_SIZE };
        SDL_RenderCopy(renderer, kingTexture, NULL, &kingRect);

        SDL_RenderPresent(renderer);
    }

    close(window, renderer, kingTexture);
    return 0;
}
