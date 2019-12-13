/*----------------------------------------------------------------
 *  Snake
 *  Its purpose is to print messages to standard output
 *  and to draw the board.
 *----------------------------------------------------------------*/

#include "Board.h"

class Output {

private:

	 // Reference to the current board.
    Board& board;

public:

     // The constructor initializes the board.
    Output(Board&);

     // Draw the board.
    void updateBoard();

     // Print the player's score.
    void showResults(int);

     // Clears the screen.
     // ("Erases" the previous board.)
    void clearScreen();

};

