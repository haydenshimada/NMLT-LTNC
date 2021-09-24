/*
xây dựng cấu trúc phân số gồm tử số, mẫu số, mã (int)
nhập vào mảng n phân số
1 Toi gian va sap xep giam dan mang
2 tìm mã của phân số có giá trị lớn hơn 1
không có thì bỏ trống kết quả
*/

#include <iostream>
#include <algorithm>
using namespace std;

struct phan_so
{
    int ts, ms;

    phan_so (int _ts, int _ms){
        ts = _ts;
        ms = _ms;
    }

    phan_so(){}

    void nhap(){
        cin >> ts >> ms ;
    }

    void xuat(){
        cout << ts <<'/' << ms << endl;
    }
};

int so_sanh ( phan_so a, phan_so b){
    int ts_a = a.ts * b.ms;
    int ts_b = b.ts * a.ms;
    if ( ts_a > ts_b ) return 1;
    if ( ts_a < ts_b ) return 2;
    return 0;
}

phan_so toi_gian ( phan_so a){
    int ucln;
    int ts = a.ts;
    int ms = a.ms;
    while (ts * ms != 0){
        if (ts > ms ) ts = ts % ms;
        if (ms > ts)  ms = ms % ts;
    }
    ucln = ts+ms;
    a.ts = a.ts/ucln;
    a.ms = a.ms/ucln;
    return a;
}

void nhap ( phan_so *arr, int n){
    for (int i = 0 ; i < n ; i++)
        arr[i].nhap();
}

void sapxep ( phan_so *arr, int n)
{
    for (int i = 0 ; i < n-1 ; i++)
        for ( int j = i+1 ; j < n ; j ++)
            if (so_sanh (arr[i], arr[j]) == 2)
                swap (arr[i], arr[j]);
}

void xuatps ( phan_so *arr, int n){
    for ( int i = 0 ; i < n ; i++)
        arr[i].xuat();
}

int main(){
    int n;
    cin >> n;
    phan_so arr[100];

    nhap (arr, n);
    
    for (int i = 0 ; i < n ; i++)
    {
        arr[i] = toi_gian(arr[i]);
    }
    sapxep (arr, n);
    xuatps (arr, n);
}
