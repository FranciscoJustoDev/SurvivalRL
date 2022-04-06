#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "map.h"
#include "renderer.h"

#define MAP_SIZE_DEFAULT 50
#define MAP_SIZE_SMALL 500
#define MAP_SIZE_MED 1000
#define MAP_SIZE_BIG 1500

int buildWorld(int map[][MAP_SIZE_DEFAULT]){
	for(int i = 0; i < MAP_SIZE_DEFAULT; i++){
		for(int j = 0; j < MAP_SIZE_DEFAULT; j++){
			map[i][j] = 1;
		}
	}
	for(int i = 0; i < MAP_SIZE_DEFAULT; i++){
		for(int j = 0; j < MAP_SIZE_DEFAULT; j++){
			int rn = rand() % 2;
			if(rn == 0){
				map[i][j] = rand() % SPRITE_COUNT;
			}
		}
	}
	return 0;
}