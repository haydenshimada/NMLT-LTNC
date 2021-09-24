/*dùng cấp phát dòng nhập mảng 2 chiều n hàm, m cột
in kết quả ra màn hình*/
#include <iostream>
using namespace std;

void nhap_mang(int **, const int &row , const int &col);
void in_mang(int **, const int &row , const int &col);
int main(){
    int n, m;
    cin >> n >> m;
    int **a;
    a = new int *[n]; // mảng n con trỏ
    for (int i=0;i<n;i++)
        *(a+i) = new int [m]; // cấp phát cho từng con trỏ

    nhap_mang(a, n, m);
    in_mang(a, n, m);
    for (int i=0;i<n;i++)
        delete [] a[i];
    
    delete [] a;
    return 0;
}
void nhap_mang(int **a, const int &row , const int &col){
    for (int i = 0; i < row ; i ++){
        for (int j = 0; j < col ; j ++) 
            // cin >> a[i][j];
            cin >> *( *(a+i) + j );
    }
}
void in_mang(int **a, const int &row , const int &col){
    for (int i = 0; i < row ; i++){
        for (int j = 0 ; j< col ; j++)
            cout << *( *(a+i) + j )<<' ';
        cout<< endl;
    }
}