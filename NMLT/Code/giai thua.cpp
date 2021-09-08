/* Nhập 1 số n nguyên dương 
Viết hàm đệ quy tính n! */
#include <iostream>
using namespace std;
long long giaithua(int n){
    if (n<=1) return 1;
    return n*giaithua(n-1);
}

int main (){
    int n;
    cin >> n;
    cout<<giaithua(n);
    return 0;
}
// đệ quy tốn bộ nhớ nhưng viết dễ, lợi về code