/* viết hàm nhập mảng, in mảng n số nguyên
Viết hàm check_tang để kt mảng này có fai tăng thực sự k
Viết hàm check_giam để kt có fai giảm thực sự k 
Dùng hàm trên in ra kết quả "TANG", "GIAM", "VO DANH"
tương ứng với kết quả kiểm tra của mảng đầu vào
1 2 3 4 5 0 6 7 8 9 TANG
1 2 3 4 5 6 7 8 9 VO DANH
1 2 3 4 5 TANG
5 4 3 2 1 GIAM
*/
#include <iostream>
using namespace std;

void nhap_mang(int a[], const int &n);

void in_mang (int a[], const int &n);

bool tang(int a[], const int &n);

bool giam(int a[], const int &n);

int main(){
    int n;
    cin >> n;
    int a[100];
    nhap_mang( a, n );
    in_mang ( a, n );

    if (tang( a, n) ) cout<<"TANG";
    else if (giam ( a , n ) ) cout <<"GIAM";
    else cout<< "VO DANH";

}

void nhap_mang(int a[], const int &n){
    for (int i = 0; i < n; i++) 
        cin >> a[i];
}

void in_mang (int a[], const int &n){
    for (int i = 0; i < n; i++) 
        cout << a[i]<<' ';
    cout << endl;
}

bool tang(int a[], const int &n){
    for (int i=0;i<n-1;i++)
        if (a[i]>=a[i+1]) return false;
    return true;
}

bool giam(int a[], const int &n){
    for (int i=0;i<n-1;i++)
        if (a[i]<=a[i+1]) return false;
    return true;
}
