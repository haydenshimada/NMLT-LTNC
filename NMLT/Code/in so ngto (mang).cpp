/*
Viết hàm nhập 1 mảng số nguyên n ptu
Viết hàm kt 1 số nguyên dương có fai là số ngto k
Dùng hàm này in ra tất cả các số nguyên tố trg mảng
*/

#include <iostream>
#include <cmath>
using namespace std;

void nhap_mang(int a[], const int &n);
void in_mang_ngto(int a[], const int &n);
bool check_ngto (const int &x);

int main(){
    int n;
    cin >> n;
    int a[100];
    nhap_mang(a , n);
    in_mang_ngto(a,n);

}
void nhap_mang(int a[], const int &n){
    for (int i = 0; i < n; i++) 
        cin >> a[i];
}

void in_mang_ngto(int a[], const int &n){
    for (int i=0;i<n;i++){
        if (check_ngto( a[i] ) ) cout<<a[i]<<' ';
    }
}
bool check_ngto (const int &x){
    if ( x < 2 ) return false;
    for (int i = 2; i <= sqrt(x) ; i++)
        if (x%i==0) return false;
    
    return true;
}