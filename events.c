#include "events.h"

#include <SDL2/SDL.h>

int handle_events(){

    SDL_Event event_handler;
    
    while (SDL_PollEvent(&event_handler) != 0){
        if ( event_handler.type == SDL_QUIT )
            return 1;
    }
    return 0;
}
