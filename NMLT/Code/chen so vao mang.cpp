/* viết hàm nhập mảng, in mảng 
để nhập vào 1 mảng n số nguyên (TANG DAN)

Viết hàm chèn 1 số vào mảng sc mảng vẫn có thứ tự sắp xếp tăng dần
KHÔNG ĐC DÙNG BẤT CỨ THUẬT TOÁN SẮP XẾP NÀO
*/

#include <iostream>
using namespace std;

void nhap_mang (int a[],const int &n);

void in_mang (int a[],const int &n);

void chen_mang (int *a, int &n, int x );

int main(){
    int n;
    cin >> n;
    int a[20];
    
    nhap_mang (a, n);
    in_mang (a, n);
    
    int x;
     cin >> x;
    chen_mang (a, n, x);
    in_mang (a,n);
    return 0;
}
void nhap_mang (int a[],const int & n){
    for (int i=0;i<n;i++) 
        cin >> a[i];
}

void in_mang (int a[],const int &n){
    for (int i=0;i<n;i++)
        cout << a[i] <<' ';
    cout << endl;
}

/* tìm vị trí cần chèn
dịch tất cả phần tử phía sau 1 ô */
// 1 2 3 4 5 6 7 8 9 
void chen_mang (int *a, int &n, int x ){
    int pos=0;
    while (a[pos] < x) pos++;
    for (int i = n; i > pos; i-- ){
        a[i] = a[i-1];
    }
    a[pos] = x;
    n++;
}