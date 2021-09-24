/* xây dụng cấu trúc ngày tháng gồm: ngày, tháng, năm;
Nhap vào 2 ngày sinh, đưa ra kq ai sinh trước */

#include <iostream>
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

int main(){
    NS ngay1; // Hàm tạo k đối
    NS ngay2 (2,4,2000); // Hàm tạo có đối

    ngay1.nhapdl();
    // ngay2.nhapdl();
    if ( sosanh (ngay1, ngay2) == 1 ) cout << "Ban 1 sinh truoc";
    else if ( sosanh (ngay1, ngay2) ==2 )
        cout << "Ban 2 sinh truoc";
    else 
        cout << " Hai dua cung ngay sinh";

    return 0;
}