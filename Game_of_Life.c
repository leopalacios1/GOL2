#include <stdio.h>
#include "Game_of_Life.h"

int main()
{
	// Board Initial Size
	int width     = 30;
	int height    = 30;
	int boardSize = getBoardSize(width,height);
	printf("Board size is: %int\n",boardSize);
	//unsigned char** gameState;

	
	unsigned char cell;

	char* example = 0b000000;
        printf("All good thus far.\n");
	
	printf("%s",example);
	
	return 0;
}

