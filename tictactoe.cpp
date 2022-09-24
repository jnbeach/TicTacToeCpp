#include <iostream>
using namespace std;


int main()
{
   playGame();
    
}

void playGame() {
   cout << "Let's Play Tic Tac Toe" << endl;
   TicTacToeBoard board;
   displayBoard(board);

};

void displayBoard(TicTacToeBoard boardToDisplay) {
   for (int i = 0; i < 2; i++) {
      cout << endl;
      for (int j = 0; j < 2; j++) {
         cout << boardToDisplay.boardState[i][j];
      }
   }
}

class TicTacToeBoard {
   public:
      char boardState[3][3];
      
         TicTacToeBoard() {
            for (int i = 0; i < 2; i++) {
               for (int j = 0; j < 2; j++) {
                  boardState[i][j] = '_';
               }
            }
         }
};