#include <stdio.h>
#include <stdlib.h>
#include "Game_of_Life.h"

int main()
{
	// Board Initial Size
	int width     = 3;
	int height    = 3;
	int boardSize = getBoardSize(width,height);
	printf("Board size is: %i\n",boardSize);
	
	// Get Boardunsigned ;
	unsigned char** board = getEmptyBoard(width, height);
	printf("Board (pointer to array of pointers) size in bytes is: %li\n",sizeof(board));
        printf("Array of pointer size size is: %li\n",sizeof(**board));

	for (int i=0;i<height;++i)
		for (int j=0;j<width;j++){
			unsigned char cell = board[i][j] + "0";
			printf("Cell in row %i column %i values are: %s \n",i+1,j+1,cell);
		}
	return 0;
}

