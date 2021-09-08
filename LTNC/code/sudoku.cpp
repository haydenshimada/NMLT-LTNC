#include <iostream>
using namespace std;

void print_sudoku (int board[9][9]){

}

bool valid_sudoku (int board[9][9], int row, int col, int value, int n){
    return true;
}
void put_sudoku(int board[9][9], int row, int col, int n){
    if (row == n){
        print_sudoku (board);
    }
    else {
        if (board[row][col] != 0){
            if (col == n-1){
                put_sudoku(board, row+1, 0, n);
            }
            else {
                put_sudoku(board, row, col+1, n);
            }
        }
        else {
            for (int value = 1; value <= n; value++){
                if (valid_sudoku (board, row, col, value, n)){
                    board[row][col] = value;
                    if (col == n-1){
                        put_sudoku(board, row+1, 0, n);
                    }
                    else {
                        put_sudoku(board, row, col+1, n);
                    } 
                    board[row][col] = 0;
                }
            }
        }
    }
}

void sudoku (){
    int board[9][9];

    put_sudoku(board, 0 , 0, 9);
}