typedef struct hitbox{
    Uint32 relative_x;
    Uint32 relative_y;
    
} HITBOX;

typedef struct hurtbox{
    Uint32 relative_x;
    Uint32 relative_y;

} HURTBOX;

typedef struct character_boxes{
    HITBOX ** hitboxes;
    HURTBOX ** hurtbox;
    Uint32 total_frames;
} CHARACTER_BOXES;

typedef struct animation {
    SDL_Texture * sheet_texture;
    SDL_Rect * frame_rect;
    CHARACTER_BOXES * frame_boxes;
    Sint32 total_frames;
    Sint32 buffer_start;
    Sint32 current_frame;
    SDL_bool looping;
} ANIMATION;
