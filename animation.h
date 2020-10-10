typedef struct hitbox{
    Uint32 relative_x;
    Uint32 relative_y;
    
} HITBOX;

typedef struct hurtbox{
    Unit32 relative_x;
    Uint32 relative_y;

} HURTBOX;

typedef struct character_boxes{
    HITBOX ** hitboxes;
    HURTBOX ** hurtbox;
} CHARACTER_BOXES;

typedef struct animation {
    SDL_Texture * sheet_texture;
    SDL_Rect * frame_rect;
    CHARACTER_BOXES * frame_boxes;
} ANIMATION;
