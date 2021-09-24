#include <iostream>
using namespace std;
int main(){
    int m , n;
    cin >> m >> n;
    int a[m][n];
    for (int i = 0 ; i < m ; i++)
        for (int j = 0 ; j < n ; j++)
            cin >> a[i][j];
    int col = 0; // column ( cột)
    cin >> col;
    for (int i = 0 ; i < m ; i++){
        for (int j = col-1 ; j < n-1 ; j++){
            a[i][j] = a[i][j+1];
        }
        n--;
    }
    for (int i = 0 ; i < m ; i++){
        for (int j = 0 ; j < n ; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
}