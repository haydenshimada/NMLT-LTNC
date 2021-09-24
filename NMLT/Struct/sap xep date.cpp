/* Nhap vao 1 mang ngay thang < 30
Sap xep theo thu tu tang dang
In kq ra man hinh */


#include <iostream>
#include <algorithm>
using namespace std;

struct NS {
    int ngay, thang , nam;
    NS (int ng, int th, int n){
        ngay = ng;
        thang = th;
        nam = n;
    }

    NS(){}

    void nhapdl(){
        // 12/5/2000
        char ch;
        cin >> ngay >> ch >> thang >> ch >> nam;
    }
    void xuat(){
        cout << ngay << '/' << thang << '/' << nam << endl;
    }
};

int sosanh (NS ngay1, NS ngay2){
    if ( ngay1.nam < ngay2.nam ) return 1;
    if ( ngay2.nam < ngay1.nam ) return 2; 

    if ( ngay1.thang < ngay2.thang) return 1;
    if ( ngay2.thang < ngay1.thang) return 2;

    if ( ngay1.ngay < ngay2.ngay) return 1;
    if ( ngay2.ngay < ngay1.ngay) return 2;

    return 0;
}

void nhap (NS *arr, int n){
    for (int i = 0 ; i < n ; i ++)
        arr[i].nhapdl();
}

void sapxep (NS *arr, int n){
    for (int i = 0 ; i < n-1 ; i++){
        for (int j = i+1 ; j < n ; j++){
            if (sosanh(arr[i] , arr[j] ) == 2){
                swap (arr[i], arr[j]);
            }
        }
    }
}

void xuat (NS *arr , int n){
    for (int i = 0 ; i < n ; i++)
        arr[i].xuat();
}

int main(){
    int n;
    cin >> n; // n<30
    NS arr_ngay[30];

    nhap(arr_ngay, n);
    sapxep(arr_ngay, n);
    xuat (arr_ngay, n);
}