#include <iostream>
using namespace std;
int main(){
    int m , n;
    cin >> m >> n;
    int a[m][n];
    for (int i = 0 ; i < m ; i ++)
        for ( int j = 0 ; j < n ; j++)
            cin >> a[i][j];
    int row;
    cin >> row;
    for (int i = row -1 ; i < m-1 ; i++){
        for (int j = 0 ; j < n ; j++){
            a[i][j] = a[i+1][j];
        }
    }
    m--;
    
    for (int i = 0 ; i < m ; i++){
        for (int j = 0 ; j < n ; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
}