#include "SDL2/SDL.h"
#include "animation.h"

void animation_advance(ANIMATION* animation){
    animation->current_frame++;
    if (animation->current_frame == animation->total_frames){
        if (animation->looping){
            animation->current_frame = 0;
        }else {
            animation->current_frame = -1;
        }   
    }
}

void animation_set_frame(ANIMATION *animation, Sint32 frame){
    if (frame <= animation->total_frames){
        SDL_LogWarn(SDL_LOG_CATEGORY_RENDER, "Attempted to set animation to frame %d of %d total frames. Operation will NOT proceed", frame, animation->total_frames);
        return;
    }
    animation->current_frame = frame;
}
