#ifndef GAME_OF_LIFE_H 
#define GAME_OF_LIFE_H
int getBoardSize(int width, int height);
unsigned char ** getEmptyBoard(int width,int height);
void clearBoardMemory(unsigned char ** board,int width,int height);
void copyBoard();

#endif 
