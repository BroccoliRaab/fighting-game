#include <SDL2/SDL.h>
#include "events.h"


Uint32 handle_events() {

    SDL_Event event_handler;

    while (SDL_PollEvent(&event_handler) != 0){
        switch(event_handler.type){
            case SDL_QUIT:
                return 1;
                break;
            default:
                SDL_LogWarn(SDL_LOG_CATEGORY_APPLICATION, "UNHANDLED EVENT NUMBER: %d\n", event_handler.type);
        }
    }
    return 0;
}
