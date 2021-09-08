/*
Cho dãy N số nguyên {a1 , ...., aN ). 
Cho M<=N. Như vậy có (N-M+1) tập con M số nguyên liên tiếp của dãy là: 
    {a1 ,....., am), {a2 ,...., aM+1 ) ,...., {aN-M+1 ,..., aN }.

Hãy viết chương trình tìm ra giá rị nhỏ nhất của các tập con trên( có N-M+1 số). 

Đầu vào:
    Dòng đầu tiên nhập vào 2 số nguyên N, M.
    Dòng tiếp theo nhập vào N số nguyên
Đầu ra: 
    Các giá trị nhỏ nhất của các tập con

Input	    Result
5 3         1 2 1
1 4 3 2 1

*/

#include <iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0 ; i < n ; i++)
        cin >> a[i];
    int i = 0;
    while (i <= n-m){
        int min = a[i];
        for (int j = i+1 ; j < i+m; j++){
            if (a[j] < min) 
                min = a[j];
        }
        cout << min << ' ';
        i++;
    }
}