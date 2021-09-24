#include <iostream>
using namespace std;

int m, n, a[1000][1000], k;

bool checkEven (int i , int j){
    for (int x = i ; x <= i + k -1; x++)
        for (int y = j ; y <= j + k - 1; y++)
            if (a[x][y] % 2)
                return 0;
    return 1;
}

void print(int i , int j){
    for (int x = i ; x <= i + k - 1; x++){
        for (int y = j ; y <= j + k - 1; y++)
            cout << a[x][y] << ' ';
        cout << endl;
    }
}

int main(){
    cin >> m >> n;
    for (int i = 0 ; i < m; i++)
        for (int j = 0 ; j < n ; j ++)
            cin >> a[i][j];
    cin >> k;
    for (int i = 0; i <= m-k+1; i++)
        for (int j = 0; j <= m-k+1; j++){
            if (checkEven(i,j)){
                print(i,j);
                return 0;
            }
        }
    cout << -1;
    return 0;
}