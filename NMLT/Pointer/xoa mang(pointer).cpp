/* dùng cấp phát động cấp phát 1 mảng n só nguyên
    viết hàm nhập mảng,
    hàm in mảng 
    hàm xóa 1 số trong mảng */
#include <iostream>
using namespace std;

void nhap_mang (int *, const int &n);
void in_mang ( const int *, const int &n);
void xoa_mang (int *, int &n, const int &x);

int main(){
    int n;
    cin >> n;
    int *a = new int [n];
    nhap_mang(a, n);
    in_mang (a, n);

    int x;
    cin >> x;
    xoa_mang (a, n, x);
    in_mang (a, n);

    delete [] a; // giải phóng bộ nhớ
    return 0;
}

void nhap_mang (int *a, const int &n){
    for (int i = 0; i < n ; i++) 
        cin >> *(a + i);
        // cin >> a[i];
}

void in_mang ( const int *a, const int &n){
    for (int i = 0;  i < n; i++)
        cout << *(a+i) << ' ';
    cout <<endl;
}

/* input 3 4 5 2 2 2 2 2 
         x = 2
    output: 3 4 5 */
void xoa_mang (int *a, int &n, const int &x){
    for (int i= 0; i<n;i++){
        if (*(a+i) == x) {
            for (int j = i; j < n; j++) {
                *(a+j) = *(a+j+1);
            }
            n--;
            i--;
        }
    }
}