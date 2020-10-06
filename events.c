#include "events.h"

#include <SDL2/SDL.h>

int handle_events(){

    SDL_Event event_handler;
    
    while (SDL_PollEvent(&event_handler) != 0){
        switch(event_handler.type){
            case SDL_QUIT:
                 return 1;
                break;
        }
    }
    return 0;
}
