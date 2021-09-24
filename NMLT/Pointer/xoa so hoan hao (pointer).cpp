/* dùng cấp phát động cấp phát 1 mảng n só nguyên
    viết hàm nhập mảng,
    hàm in mảng 
    hàm xóa all số hoàn hảo trong mảng */

#include <iostream>
#include <cmath>
using namespace std;

void nhap_mang(int *a, const int &n);
void in_mang (const int *a, const int &n);
bool check_perfect(int x);
void xoa_perfect(int *a, int &n);

int main(){
    int n;
    cin >> n;
    int *a = new int [n];
    nhap_mang(a, n);

    xoa_perfect(a,n);
    in_mang(a,n);

    delete [] a;
    return 0;
}
void nhap_mang(int *a, const int &n){
    for (int i=0 ;i<n;i++) 
        cin >> *(a+i);
}
void in_mang (const int *a, const int &n){
    for (int i=0;i<n;i++)
        cout << *(a+i) <<' ';
    cout << endl;
}
bool check_perfect(int x){
    int sum = 1;
    int i=2;
    for (; i < sqrt(x) ; i++ ){
        if ( x%i == 0 ) {
            sum += i;
            sum += x/i;
        }
    }
    if (i*i == x) sum+=i;
    return (x == sum);
}
void xoa_perfect(int *a, int &n){
    for (int i=0; i<n ;i++){
        if (check_perfect( *(a+i) ) == true ) {
            for (int j=i;j<n;j++){
                *(a+j) = *(a+j+1);
            }
            n--;
            i--;
        }
    }
}

