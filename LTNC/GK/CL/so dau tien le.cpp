#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int *a = new int [n];

    for (int  i = 0 ; i < n ; i++)
        cin >> *(a+i);
    for (int i = 0 ; i < n ; i++){
        int tmp = *(a+i);
        while (tmp >= 10){
            tmp /= 10;
        }
        if (tmp % 2 != 0)
            cout << *(a+i) << ' ';
    }

    delete [] a;
    return 0;
}