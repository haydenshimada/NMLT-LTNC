#include <iostream>
#include <vector>
using namespace std;

long long pow(int k, int n, long a[]){
    if (n == 0 || n == 1)
        return a[n];
    else {
        if (a[n] != 0)
            return a[n];
        else {
            if (n % 2 == 0){
                long tmp = pow(k, n/2, a);
                a[n] = tmp * tmp;
                return a[n];
            }
            else {
                int tmp = n/2;
                long T = pow(k, n/2, a);
                while (tmp < n-1){
                     T = T * pow(k,n/2, a);
                     tmp += n/2;
                }
                a[n] = T * k;
            }
        }
    }
}

int main(){
    int k, n;
    cout << "Nhap k: ";
    cin >> k;
    cout <<"Nhap n: ";
    cin >> n;
    long a[100] = {0};

    a[0] = 1;
    a[1] = k;

    cout << "k^n = " << pow(k, n, a);
    return 0;
}
