/*
Dùng cấp phát động nhập mảng só nguyên n ptu
tìm và in ra mảng con lien tiếp DÀI NHẤT k chứa số nguyên tô nào
VD
2 3 4 5 6 7 8 8 4 10 12 10 11
output: 8 8 4 10 12 10 (bắt đầu từ vị trí nào, có độ dài bao nhiêu)
pos_max = 0, len_max = 0
*/
#include <iostream>
#include <cmath>
using namespace std;
void nhap_mang(int *a, const int &n);
void in_mang( int *a,const int &vt,const int &number);
bool kt_ngto (const int &x);
void xuly (const int *a, const int &n, int &pos, int &len);

int main()
{
    int n;
    cin >> n;
    int *a = new int [n];
    nhap_mang(a,n);
    
    int pos, len;
    xuly (a,n, pos, len);
    in_mang(a, pos, len);

    delete [] a;
    
    return 0;
}
void nhap_mang(int *a, const int &n){
    for (int i =0 ; i <n;i++)
        cin >> *(a+i);
}
void in_mang( int *a, const int &vt,const int &number){
    for (int i= vt ;i < number + vt ; i++)
        cout << *(a+i)<<' ';
}
bool kt_ngto (const int &x)
{
    if (x < 2) return false;
    for (int i =2 ; i <= sqrt(x); i++)
        if ( x%i == 0 ) return false;
    return true;
}
void xuly (const int *a, const int &n, int &pos, int &len){
    /*
    2 3 4 5 6 7 8 8 4 10 12 10 11
    */
    pos = 0;
    len = 0;
    for (int i = 0 ; i < n; i++)
    {
        int l = 0;
        int p = i;
        while ( !kt_ngto(a[i]) && (i < n) )
        {
            l++;
            i++;
        }
        if (len < l)
        {
            len = l;
            pos = p;
        }
    }
}