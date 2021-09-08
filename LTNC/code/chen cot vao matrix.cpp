#include <iostream>
using namespace std;
int main(){
    int m , n;
    cin >> m >> n;
    int a[100][100];
    for (int i = 0 ; i < m ; i++)
        for (int j = 0 ; j < n ; j++)
            cin >> a[i][j];
            
    int pos, x;
    cin >> pos >> x;
    
    for (int i = 0 ; i < m ; i++){
        for (int j = n ; j >= pos; j --){
            a[i][j] = a[i][j-1];
        }
        a[i][pos-1] = x;
    }
    for (int i = 0 ; i < m ; i++)
        {
            for (int j = 0 ; j < n+1 ; j++)
                cout << a[i][j] << ' ';
            cout << endl;
        }
        
    return 0;
}