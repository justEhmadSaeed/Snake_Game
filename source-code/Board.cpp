/**----------------------------------------------------------------
 *  Snake
 *  It defines a board that will be common 
 *  to both the snake and the food.
 *----------------------------------------------------------------*/

#include "Board.h"
// constructor to intialize all cells with 0.
Board::Board() {

	for (int i = 0; i < MAX_LINES; i++)
		for (int j = 0; j < MAX_COLUMNS; j++)
			board[i][j] = 0;

}
// function to get value at position of the board
int Board::getXY(int x, int y) {

	if (isValidXY(x, y))
		return board[x][y];
	else
		return -1;

}
// function to set value at random position of the board
void Board::setXY(int x, int y, unsigned int value) {

	if (isValidXY(x, y))
		board[x][y] = value;

}
// function to check that X & Y are in the board
bool Board::isValidXY(int x, int y) {

	if (0 <= x && x < MAX_LINES	&& 0 <= y && y < MAX_COLUMNS)
		return true;

	return false;

}
