/*
dung cấp phsat đọng nhập mảng n số nguyên
viết hàm trả về mảng (con trỏ) chứa tất cả các số có trg mảng
MỖI SÓ ĐÚNG 1 LẦN, THEO THỨ TỰ XUẤT HIỆN
VD:
10
2 3 1 5 4 3 2 4 5 1
0 0 0 0 0 1 1 1 1 1
output: 2 3 1 5 4 
int *unique_number(const int *a, const int &n, int &m);
*/

#include <iostream>
using namespace std;

void nhap_mang(int *a, const int &n);
int *unique_number(const int *a, const int &n, int &m);

int main(){
    int n;
    cin >> n;

    int *a = new int [n];
    nhap_mang(a,n);

    int m;
    int *b = unique_number(a,n,m);
    
    for (int i = 0; i < m ; i++)
        cout << *(b+i)<<' ';
    delete [] a;
    return 0;
}

void nhap_mang(int *a, const int &n){
    for (int i =0  ; i <n ; i++)
        cin >> *(a+i);
}
int *unique_number(const int *a, const int &n, int &m){
    int *b= new int [n];
    m = 0;
    bool co[n];
    for (int i =0 ; i< n; i++) co[i] = false;
    for (int i =0 ; i< n; i++) 
        if ( !co[i] )
        {
            b[m++]  = a[i];
            for (int j = i+ 1 ; j<n ;j ++)
                if (a[j]== a[i])
                    co[j] = true;
        }

    return b;
}