#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#define n 8


using namespace std;

void printBoard(int board[n][n]);
bool isSafe(int board[n][n], int rattack, int lattack);
bool placeQueen(int board[n][n], int lattack);

int main()
{
  
  
  int board[n][n] = {{0,0,0,0,0,0,0,0},
                    {0,0,0,0,0,0,0,0},
                    {0,0,0,0,0,0,0,0},
                    {0,0,0,0,0,0,0,0},
                    {0,0,0,0,0,0,0,0},
                    {0,0,0,0,0,0,0,0},
                    {0,0,0,0,0,0,0,0},
                    {0,0,0,0,0,0,0,0}};
                    
bool sol = placeQueen(board, 0);
if (sol == false)
{
    cout << "There is no solution for this size. " << endl;
}
else
{
    cout << "The solution is " << endl;
    printBoard(board);
}
  
  return 0;
}

// print board 
void printBoard(int board[n][n]){
  int i;
  int j;
  cout << "Queens are placed :" << endl;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++){
      cout << board[i][j] << " ";
    }
    cout << endl;
  }
}

// check if safe or not 
bool isSafe(int board[n][n], int rattack, int lattack){
  int i;
  int j;
  
  for (int i = 0; i < lattack; i++){
    if (board[rattack][i] == 1){
    return false;
       }
  }
  i = rattack;
  j = lattack;
  while(i >= 0 && j >= 0){ //diagonals
    if (board[i][j] == 1)
    {
      return false;
    }
    i--; j--; 
  }
  i = rattack; 
  j = lattack;
  while (i < n && j >= 0) // other diagonal
  {
    if (board[i][j] == 1)
    {
      return false;
    }
    i++; j--;
  }
  return true;
}

  // can queen be placed?
  bool placeQueen(int board[n][n], int lattack)
  {
    if (lattack >= n){
      return true;
    }
    int i;
    for (i = 0; i < n; i++)
    {
      if(isSafe(board, i, lattack))
      {
        board[i][lattack] = 1;
        if(placeQueen(board,lattack + 1) == true)
        return true;
        board[i][lattack] = 0;
      }
    }
    return false;
  }






