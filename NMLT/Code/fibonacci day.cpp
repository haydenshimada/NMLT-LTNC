#include <iostream>
using namespace std;

int fibonacci (int n);

int main(){
    int n; cin >> n;
    for (int i=0;i<=n;i++)
        cout << fibonacci (i)<<' ';
}
int fibonacci (int n){
    if (n<=1) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}