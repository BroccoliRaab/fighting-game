#include <stdio.h>
#include <time.h>
#include <stdint.h>

#include <SDL2/SDL.h>

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480

int main(int argc, char *argv[]){
    
    SDL_Window *main_window = NULL;
    SDL_Surface *main_surface = NULL;

    if(SDL_Init(SDL_INIT_VIDEO) !=0){
        SDL_Log("Unable to initialize SDL: %s", SDL_GetError());
        return 1;
    }

    main_window = SDL_CreateWindow("Hello World", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    
    if (main_window == NULL){
        SDL_Log("Unable to create window: %s", SDL_GetError());
        return 1;
    }

    main_surface = SDL_GetWindowSurface(main_window);

    SDL_Delay(3000);
    
    const int frameDelay = 1000/120;

    uint32_t frameStart;
    int frameTime;
    int quit = 0;
    while(!quit){
        frameStart = SDL_GetTicks();

        frameTime = SDL_GetTicks() - frameStart;
        
        printf("%u\n", frameTime);
    
        while(frameDelay > frameTime){
            frameTime = SDL_GetTicks() - frameStart;
        };
    }
    printf("Hello World\n");
    return 1;
}
