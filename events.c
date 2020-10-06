#include "events.h"

#include <SDL2/SDL.h>

struct[characterState]{
    uint8_t hitstun = 0;
}

int handle_events(){

    SDL_Event event_handler;
    
    while (SDL_PollEvent(&event_handler) != 0){
        switch(event_handler.type){
            case SDL_QUIT:
                return 1;
                break;
            default:
                SDL_LogWarn(SDL_LOG_CATEGORY_APPLICATION, "UNHANDLED EVENT: %s\n", event_handler.type);
        }
    }
    return 0;
}
