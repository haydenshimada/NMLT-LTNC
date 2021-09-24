#include <iostream>
using namespace std;

int m , n ,a[1000][1000], k;

int sum (int i, int j){
    int S = 0;
    for (int x = i ; x <= i+k-1; x++)
        for (int y = j; y <= j+k-1; y++)
            S += a[i][j];
    return S;
}

void print (int i , int j){
    for (int x = i ; x <= i+k-1; x++){
        for (int y = j; y <= j+k-1; y++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
}
int main(){
    cin >> m >> n;
    for (int i = 0 ; i < m ; i++)
        for (int j = 0 ; j < n ; j++)
            cin >> a[i][j];
    cin >> k;
    int maxSum = 0;
    int pos_i, pos_j;
    for (int i = 0 ; i <= m-k ; i++){
        for (int j = 0 ; j <= n-k ; j++){
            if (sum(i,j) > maxSum){
                maxSum = sum(i,j);
                pos_i = i;
                pos_j = j;
            }
        }
    }
    for (int i = pos_i ; i <= pos_i + k -1 ; i++){
        for (int j = pos_j ; j <= pos_j+k-1; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
    return 0;
}