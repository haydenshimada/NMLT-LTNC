/*
Cho mảng có n phần tử. Có hay không chỉ số i sao cho tổng trái bằng tổng phải (không tính số ai),

 tức (a0 + … + ai-1) = (ai+1 + … + an-1). Nếu có thì in ra “YES", nếu không thì in ra “NO".

Đầu vào:
    Dòng đầu nhập vào số phần tử của mảng n
    Dòng thứ 2 nhập vào giá trị các phần tử của mảng
Đầu ra: 
    "yes" nếu thỏa mãn yêu cầu bài toán
    "no" nếu ngược lại

Input	    Result
4           yes
8 6 5 3 
3           no
7 2 1
*/
#include <iostream>
using namespace std;

string check_sum (int a[], int n);

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0 ; i < n ; i++)
        cin >> a[i];
    cout << check_sum (a, n);
}

string check_sum (int a[], int n){
    if (n==1) return "yes";
    int i = 1;
    while (i < n-1){
        int sumleft = 0;
        int sumright = 0;
        for (int j = 0 ; j < i ; j++)
            sumleft += a[j];
        for (int j = n-1 ; j > i ; j--)
            sumright += a[j];
        if (sumleft == sumright) 
            return "yes";
        i++;
    }
    return "no";
}