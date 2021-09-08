#include <iostream>
using namespace std;
int main(){
    unsigned int n;
    cin >> n;
    int a[n];
    for ( int i = 0 ; i < n ; i++)
        cin >> a[i];
    /*for (int i = 0 ; i < n ; i++){
        int flag = 0;
        for (int j = 0 ; j < n ; j ++){
            if ( j!=i && a[i]==a[j])
                flag = 1;
        }
        if (flag == 0) cout << a[i] << ' ';
    } */

    int x = 0;
    for ( int  i = 0 ; i < n ; i++)
        x = x^a[i];
        /* phép cộng login XOR(^)
        0 ^ 0 = 0;
        1 ^ 1 = 0;
        1 ^ 0 = 1;
        0 ^ 1 = 1;
        2 số giống nhau -> xor = 0;
        số cô đơn ^ 0 = số cô đơn;
        */

    cout << x;
}
