#include "map.h"
#ifndef __RENDERER_H__
#define __RENDERER_H__

enum Sprite_ID{
    PLAYER_IMG,
    GROUND_IMG,
    GRASS_IMG,
    WATER_IMG,
    TREE_IMG,
    ROCK_IMG,
    SPRITE_COUNT
};

char getSprite(int n);
int renderWindow(int map[][MAP_SIZE_DEFAULT]);

#endif