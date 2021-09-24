/* viết hàm int *tim_so (const int * , cinst int &n, const int &x );
trả về mảng chứa vị trí của số x
*tim_vt_so (const int * , cinst int &n, const int &x );
10
3 4 2 3 5 6 4 3 3 3
x = 3
1 4 8 9 10 (vi tri cua so 3 trong mang)
*/
#include <iostream>
using namespace std;

void nhap_mang(int *a, const int &n);
int tim_vt_so (const int *a, const int &n, const int &x, int &m);
void in_mang (const int *a, const int &n);

int main(){
    int n;
    cin >> n;
    int *a = new int [n];
    nhap_mang (a,n);
    in_mang (a,n);

    int x;
    cin >> x;

    int m;
    int *b = tim_vt_so (a, n, x, m);

    delete [] a;
    return 0;
}

void nhap_mang(int *a, const int &n){
    for (int i=0;i<n;i++) cin >> *(a+i);
}
void in_mang (const int *a, const int &n){
    for (int i=0;i<n;i++) cout << *(a+i) <<' ';
}
int tim_vt_so (const int *a, const int &n, const int &x, int &m){
    m=0;
    int * vt = new int [n]; // sinh ra mảng mới chứa vị trí x
    for (int i=0;i<n;i++){
        if ( *(a+i) == x ) {
            vt[m] = i+1;
            m++;
        }
    }
    return vt; // trả về vị trí của mảng cần tìm
}