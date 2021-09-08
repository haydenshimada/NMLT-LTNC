#include <iostream>
#include <cmath>
using namespace std;

int count_T (int X, int n, int num , int T){
    int count = 0;
    int p = pow(num,n);
    while (T + p < X){
        count += count_T (X, n, num+1, T+p);
        num++;
        p = pow(num,n);
    }
    if (T + p == X)
        count++;
    return count;
}

int main (){
    int X, n;
    cin >> X >> n;
    cout << count_T(X, n, 1, 0);
}