#include <stdio.h>
#include "renderer.h"
#include "map.h"

char getSprite(int n){
	char img;
	switch(n){
		case PLAYER_IMG:
			img = '@';
			break;
		case GROUND_IMG:
			img = '.';
			break;
		case WATER_IMG:
            img = '~';
			break;
		case GRASS_IMG:
            img = '"';
			break;
		case ROCK_IMG:
            img = 'o';
			break;
		case TREE_IMG:
			img = 'O';
			break;
		default:
			img = '.';
	}
	return img;
}

int renderWindow(int map[][MAP_SIZE_DEFAULT]){
    /*
        figure out where player is
        draw centered to the player
    */
	for(int i = 0; i < MAP_SIZE_DEFAULT; i++){
		for(int j = 0; j < MAP_SIZE_DEFAULT; j++){
			printf("%c", getSprite(map[i][j]));
		}
		printf("\n");
	}
	return 0;
}