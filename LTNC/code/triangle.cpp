// nhập h 
// vẽ tam giác cân và tam giác rỗng (vẽ outline) cà tam giác vuông cân vs chiều cao h
/*
   *              *                          *
  ***            * *                         **
 *****          *   *                        ***
*******        *******                       ****
*/

#include <iostream>
using namespace std;

void tam_giac_can(const int h){
    for (int i = 1 ; i <= h ; i++){
        for (int j = i ; j < h; j++){
            cout << ' ';
        }
        for (int j = 1; j <= 2*i-1; j++)
            cout << '*';
        cout << endl;
    }
    cout << endl;
}

void tam_giac_rong(const int h){
    int n = h-1;
    for (int i = 0 ; i < h-1 ; i++){
        for (int j = 0; j < 2*h-1; j++){
            if (j == n-i || j == n+i)
                cout << '*';
            else cout << ' ';
        }
        cout << endl;
    }
    for (int i = 0 ; i < 2*h-1; i++)
        cout << '*';
    cout << endl;
    cout << endl;
}

void tam_giac_vuong_can(const int h){
    for (int i = 0 ; i < h ; i++)
    {
        for (int j = 0 ; j <= i ; j++)
            cout << '*';
        cout << endl;
    }
    cout << endl;
}
int main(){
    int h;
    cin >> h;
    tam_giac_can(h);
    tam_giac_rong(h);
    tam_giac_vuong_can(h);
}
    