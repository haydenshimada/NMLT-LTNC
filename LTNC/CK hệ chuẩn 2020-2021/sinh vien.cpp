#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

struct SinhVien{
    string maLop;
    string maSV;
    double diemTP;
    double diemCK;
};

struct DanhSachSV {
    vector <SinhVien> vt;

    DanhSachSV(){};
    DanhSachSV(vector <SinhVien> a){
        vt = a;
    }

    vector <string> timLech (string lop){
        vector <string> lech;
        for (int i = 0 ; i < vt.size(); i++){
            if (vt[i].maLop == lop)
                if ( abs(vt[i].diemCK - vt[i].diemTP) >= 2.5 )
                    lech.push_back(vt[i].maSV);
        }
        return lech;
    }
};

int main(){
    SinhVien msv[] = { {"5", "12021310", 9, 1}, {"5", "12021296", 9, 6}, {"25", "12021312", 8, 7} };
    vector <SinhVien> vsv (msv, msv + 3);
    DanhSachSV dssv(vsv);
    vector <string> lech = dssv.timLech("5"); // |25
    sort (lech.begin(), lech.end());
    for (int i = lech.size() - 1; i >= 0; i--)
        cout << lech[i] << ' ';
    return 0;
}
