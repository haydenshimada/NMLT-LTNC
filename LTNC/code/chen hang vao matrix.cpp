#include <iostream>
using namespace std;
int main(){
    int m , n;
    cin >> m >> n;
    int a[m+1][n];
    for (int i = 0 ; i < m ; i++)
        for (int j = 0 ; j < n ; j++)
            cin >> a[i][j];
            
    int pos, x;
    cin >> pos >> x;
    
    for (int i = m ; i >= pos ; i--){
        for (int j = 0 ; j < n ; j++){
            a[i][j] = a[i-1][j];
        }
    }
    for (int j = 0 ; j < n ; j ++)
        a[pos-1][j] = x;
    
    for (int i = 0 ; i < m+1 ; i ++)
        {
            for (int j = 0 ; j < n ; j++)
                cout << a[i][j] << ' ';
            cout << endl;
        }
    
    return 0;
}