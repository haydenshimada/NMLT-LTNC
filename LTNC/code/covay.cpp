#include<iostream>
#include<fstream>

#define MAX 100
#define WHITE_PLAYER 1
#define BLACK_PLAYER 2

using namespace std;

int board[MAX][MAX];

// Thuat toan vet dau loang
// Tham khao them thuat toan nay trong bai do min: https://aicurious.io/posts/thuat-toan-loang-trong-do-min/
void extend_whites(int whites[MAX][MAX], int visited[MAX][MAX], int x, int y, int row, int col){
    visited[x][y] = 1;
    whites[x][y] = 1;

    // Ktra ben trai
    if(y-1 >= 0 && visited[x][y-1] == 0 && board[x][y-1] == WHITE_PLAYER){
        whites[x][y-1] = 1;
        extend_whites(whites, visited, x, y-1, row, col);
    }

    // Ktra ben phai
    if(y+1 < col && visited[x][y+1] == 0 && board[x][y+1] == WHITE_PLAYER){
        whites[x][y+1] = 1;
        extend_whites(whites, visited, x, y+1, row, col);
    }

    // Ktra ben tren
    if(x-1 >= 0 && visited[x-1][y] == 0 && board[x-1][y] == WHITE_PLAYER){
        whites[x-1][y] = 1;
        extend_whites(whites, visited, x-1, y, row, col);
    }

    // Ktra ben duoi
    if(x+1 < row && visited[x+1][y] == 0 && board[x+1][y] == WHITE_PLAYER){
        whites[x+1][y] = 1;
        extend_whites(whites, visited, x+1, y, row, col);
    }

}

bool check_whites(int whites[MAX][MAX], int row, int col){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(whites[i][j] == 1){
                if(j-1 >= 0 && board[i][j-1] == 0) return false;
                if(i-1 >= 0 && board[i-1][j] == 0) return false;
                if(j+1 < col && board[i][j+1] == 0) return false;
                if(i+1 < row && board[i+1][j] == 0) return false;
            }
        }
    }
    return true;
}

int main(){
    ifstream fin("covay.txt");
    int row, col;
    fin>>row>>col;

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            fin>>board[i][j];
        }
    }

    // Dung de luu vet nhung quan trang da duoc mo rong
    int visited[MAX][MAX] = {0};

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(board[i][j] == WHITE_PLAYER && visited[i][j] == 0){
                // Luu nhung o khi' cua quan trang dang xet
                int whites[MAX][MAX] = {0};

                extend_whites(whites, visited, i, j, row, col);

//                for(int t = 0; t < row; t++){
//                    for(int k = 0; k < col; k++){
//                        cout<<whites[t][k]<<" ";
//                    }
//                    cout<<endl;
//                }
                if(check_whites(whites, row, col)){
                    cout<<"YES";
                    return 0;
                }
                //cout<<"========"<<endl;
            }
        }
    }
    cout<<"NO";
    return 0;
}
