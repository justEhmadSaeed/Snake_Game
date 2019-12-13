/**----------------------------------------------------------------
 *  Snake
 *  It describes a food item.
 *----------------------------------------------------------------*/

#include "Food.h"
#include <stdio.h>  // NULL
#include <stdlib.h> // srand(), rand()
#include <time.h>   // time()

// constructor 
Food::Food(Board& newBoard): board(newBoard) {  }
// function to check if food is eaten
bool Food::isEaten() {

    // the value of a food item on the board is 2
    if (board.getXY(x, y) == 2)
        return false;
    return true;

}
// function generates random food
void Food::generateFood() {

    srand(time(NULL));

    int tempX, tempY;

    // Generate random coordinates until a free
    // position is found(the element on the board
    // at those coordinates = 0).
    // board[tempX][tempY] = 0; is a free position
    do {

        tempX = rand() % MAX_LINES;     // generating random varable
        tempY = rand() % MAX_COLUMNS;   // generating random varable

    }
    while (board.getXY(tempX, tempY));

    // Create a food item there
    board.setXY(tempX, tempY, 2);   // calling set function to creat food

    // Update the coordinates of the current food item
    x = tempX;
    y = tempY;

}
