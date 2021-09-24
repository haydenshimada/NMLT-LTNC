/*
nhập mảng số nguyên n ptu (mảng động) 
tìm dãy con tăng dần thực sự lớn nhất của mảng vừa nhập
nếu có 2 dãy cùng độ dài thì lấy dãy đầu tiên

8
1 2 3 4 0 2 3 4
output: 1 2 3 4

10
1 2 3 4 5 6 0 3 2 4
output: 1 2 3 4 5 6
*/
#include <iostream>
using namespace std;
void nhap_mang(int *a, const int &n);
void in_mang( int *a,const int &vt,const int &number);
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
void in_mang( int *a, const int &vt, const int &number){
    for (int i= vt ;i <= number + vt ; i++)
        cout << *(a+i)<<' ';
}
void xuly (const int *a, const int &n, int &pos, int &len)
{
    pos = 0;
    len = 0;
    for (int i = 0; i < n-1 ; i++) 
    {
        int l=0;
        int p=i;
        while ( a[i] < a[i+1] && (i<n-1) )
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