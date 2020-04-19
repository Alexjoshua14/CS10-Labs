#include <stdio.h>
#define SIZE 10
#define TRUE 1
#define FALSE 0

// global variable of the boolBoard to cross check for queen board
char board[SIZE][SIZE];

void printBoard() {
  for(int x = 0; x < 10; x++) {
    for(int y = 0; y < 10; y++) {
      printf("%c ", board[x][y]);
    }
    printf("\n");
  }
}

// checks positions
int checkPos(int row, int col) {
  // checks columns
  for(int y = 1; y < SIZE-1; y++) {
    if (board[y][col] == 'q') return FALSE;
  }

  // checks diagonals
  int i, j;
  // upper left 
  for (i = row, j = col; i > 0 && j > 0; i--, j--) {
    if (board[i][j] == 'q') return FALSE;
  }

  // lower right
  for (i = row, j = col; i < SIZE-1 && j < SIZE-1; i++, j++) {
    if (board[i][j] == 'q') return FALSE;
  }

  // lower left
  for (i = row, j = col; j < SIZE-1 && i >= 1; i--, j++) {
    if (board[i][j] == 'q') return FALSE;
  }

  // upper right
  for (i = row, j = col; j >= 1 && i < SIZE-1; i++, j--) {
    if (board[i][j] == 'q') return FALSE;
  }

  return TRUE;
}

//Checks the row and column for other queens, if there are no other queens in the row and column then
//it places a queen in the checked position. If we reach the end of the board and have not placed eight queens
//then it will backtrack and reorganize the way the queens were placed.
int placeQueenRec(int row) {
  if (row == SIZE-1) return TRUE;
  
  for (int col = 1; col < SIZE-1; col++) {
    
    if (checkPos(row, col)) {
      board[row][col] = 'q';      
        if (placeQueenRec(row+1)) {
            return TRUE;
        }
    }
    board[row][col] = '.';
  }
  
  return FALSE;
}

int main() {
  // populates the queen board with blank spaces and boolean board
  for(int x = 0; x < SIZE; x++) {
    for(int y = 0; y < SIZE; y++) {
      // blank spaces
      board[x][y] = '.';
      if(y == 0 || y == SIZE-1) {
	// side border
	board[x][y] = '|';
      }
      if(x == 0 || x == SIZE-1) {
	// top border
      	board[x][y] = '-';
      }
    }
  }
  
  placeQueenRec(1);

  printBoard();

  return 0;
}
