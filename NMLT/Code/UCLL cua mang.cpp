/*
Viết hàm tìm UCLL của 2 số nguyên
Dùng hàm này tìm UCLL của 1 mảng số nguyên n ptu
*/

#include <iostream>
using namespace std;

void nhap_mang(int a[], const int &n);
int ucln_mang( int a[], const int &n );
int UCLN(int a, int b);

int main(){
    int n;
    cin >> n;
    int a[20];
    nhap_mang( a, n);
    cout << ucln_mang (a,n);

    return 0;
}
void nhap_mang(int a[], const int &n){
    for (int i = 0; i < n; i++) 
        cin >> a[i];
}

int ucln_mang( int a[], const int &n ){
    int uc = a[0];
    for (int i=1;i<n ;i ++)
        uc = UCLN(uc, a[i]);
    return uc;
}

int UCLN(int a, int b){
   /* while (a*b !=0) //ca a,b đều khác 0
    {
        if ( a > b ) a = a % b;
        else b = b % a;
    }
    return (a+b);*/
     // đệ quy
    if (a*b == 0) return (a+b);
    if (a>b) return UCLN(a&b, b);
    return UCLN (a,b%a);
}