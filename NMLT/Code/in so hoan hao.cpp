/*
Viết hàm nhập 1 mảng số nguyên n ptu
Viết hàm kt 1 số nguyên dương có fai là số hoàn hảo k
Dùng hàm này in ra tất cả các số nguyên tố trg mảng
*/
#include <iostream>
#include <cmath>
using namespace std;

void nhap_mang(int a[], const int &n);
void in_mang_perfect(int a[], const int &n);
bool check_perfect (const int &x);

int main(){
    int n;
    cin >> n;
    int a[100];
    nhap_mang(a , n);
    in_mang_perfect(a,n);

}
void nhap_mang(int a[], const int &n){
    for (int i = 0; i < n; i++) 
        cin >> a[i];
}

void in_mang_perfect(int a[], const int &n){
    for (int i=0;i<n;i++){
        if (check_perfect( a[i] ) ) cout<<a[i]<<' ';
    }
}
bool check_perfect (const int &x){
    int sum = 1;
    int i=2;
    for ( ; i < sqrt(x) ; i++)
        {
            if (x%i==0) 
                sum +=i;
                sum += x/i ;
        }
    if (i*i == x) sum +=i;
    return (sum == x);  //in ra kết quả phép ss sum==x
    
}
    
