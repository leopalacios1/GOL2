#include <stdlib.h>
#include <stdbool.h>

// Get the board size given width and height
int getBoardSize(int width, int height)
{
	return width*height;
}

// Get board height
int getHeight(unsigned char ** board)
{
	return sizeof(board)/sizeof(board[0]);
}

// Get board width
int getWidth(unsigned char ** board)
{
	return sizeof(board[0])/sizeof(board[0][0]);
}

// The board is designed such that emptyBoard is an array of pointers that point
// to each row of the board, each row is a pointer to an array of unsigned chars.
unsigned char ** getEmptyBoard(int width,int height)
{
	// Defining an array of pointers for the board, each pointer in the arrar is a row of the game.
	unsigned char ** emptyBoard = (unsigned char **) malloc(height * sizeof(unsigned char *));

	// Fill in the array of pointers with pointers to an array of cells (rows)
	for (int i=0;i<height;++i)
		emptyBoard[i] = (unsigned char *) malloc(width*sizeof(unsigned char));

	return emptyBoard;
}

// Clears a given board from memory.
void clearBoardMemory(unsigned char ** board,int width,int height)
{
	for (int i=0;i<height;++i)
		free(board[i]);
	free(board);
	return;
}

// Copies board and clears old board from memory.
unsigned char ** copyBoard(unsigned char ** oldBoard)
{
	// TO DO: create this function
	return;
}

// Expands the board accordingly, return new board
unsigned char ** expandBoard(unsigned char ** oldBoard)
{
	return;
}

// Print a board
void ncursePrint(board)
{
	return;
}

// Game of life update to next iteration
unsigned char ** nextBoard(unsigned char ** oldBoard)
{
	return;
}

bool checkResize(unsigned char ** board)
{
	return 0;
}

// Update board by checking size, getting next generation and printing
void update(unsigned char ** gameBoard)
{
	// Check if board needs resizing, if so get resized board
	if (checkResize(gameBoard)){
		gameBoard = expandBoard(gameBoard);
	}
	// Update the states of the new board
	unsigned char ** newBoard = nextBoard(gameBoard);

	// Print the new board
	ncursePrint(newBoard);
}

	
