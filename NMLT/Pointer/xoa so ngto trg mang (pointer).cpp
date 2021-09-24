/* dùng cấp phát động cấp phát 1 mảng n só nguyên
    viết hàm nhập mảng,
    hàm in mảng 
    hàm xóa all số nguyên tố trong mảng */
#include <iostream>
#include <cmath>
using namespace std;

void nhap_mang (int *a, const int &n);
void in_mang (const int *a, const int &n);
void xoa_ngto ( int *a, int &n);
bool check_ngto (int x);

int main(){
    int n;
    cin >> n;
    int *a = new int [n]; //cấp pháp bộ nhớ (mảng động)
    nhap_mang (a,n);
    // in_mang (a,n);

    xoa_ngto(a,n);
    in_mang(a,n);

    delete [] a; //giải phóng bộ nhớ 
    // bao h có new thì fai có delete

    return 0;
}
bool check_ngto (int x){
    if (x <= 1) return false;
    else for (int i=2; i <= sqrt (x); i++)
        if (x%i==0) return false;
    return true;
}

void nhap_mang (int *a, const int &n){
    for (int i=0;i<n;i++)
        cin >> *(a+i); 
}
void in_mang (const int *a, const int &n){
    for (int i=0;i<n;i++)
        cout << *(a+i) << ' ';
    cout << endl;
}

void xoa_ngto ( int *a, int &n){
    for (int i=0; i<n;i++){
        if (check_ngto( *(a+i) ) == true ) {
            for (int j = i; j<n;j ++){
                *(a+j) = *(a+j+1);
                // a[j] == * (a+j+1);
            }
            n--;
            i--;
        } 
    }
}