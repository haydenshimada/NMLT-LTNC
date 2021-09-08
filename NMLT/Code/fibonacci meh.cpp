/* nhập số n nguyên dương
in ra n số fibonacci đầu tiên trg dãy
(bắt đầu từ 0) */

#include <iostream>
using namespace std;

long int fibonacci(int n){
    if (n == 1) return 0;
    if (n == 2) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

void in_fibonacci(int n){
    int f0 = 0, f1 = 1 , fn;
    for (int i=1;i<=n;i++){
        cout << f0 <<' ';
        fn=f0 + f1;
        f0 = f1;
        f1 = fn;
    }
}

int main(){
    int n;
    cin >> n;
     /*for (int i=1; i <= n;i++){
        cout<< fibonacci(i)<< ' ';
    } */
    in_fibonacci(n);
    return 0;
}