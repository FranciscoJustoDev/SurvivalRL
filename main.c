#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "map.h"
#include "renderer.h"

struct Player{
	int x;
	int y;
};

int main(void){
	srand(time(0));

	int map[MAP_SIZE_DEFAULT][MAP_SIZE_DEFAULT];

	buildWorld(map);
	renderWindow(map);
	return 0;
}
