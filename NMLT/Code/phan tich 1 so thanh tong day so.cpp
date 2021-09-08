/* 
Đếm số phân tách thành tổng các số nguyên liên tiếp của số N
vd: 15 = 1 + 2 + 3 + 4 + 5
    15 = 4 + 5 + 6
    15 = 7 + 8
    -> 3 cách */
// sử dụng đệ quy
// N < 10^6;

/* gọi ý:
hàm có 2 chỉ số
1, 14 (i,n-i)
2, 12 (i+1, n-(i+1))
3, 9  
4, 5
5, 5
6, 0

4, 11
5, 6
6, 0

7, 8
8, 0
*/

#include <iostream>

using namespace std;

int a[100];
int d = 0;

int solve(int n, int m)
{
    if(n < 0) return 0;
    if(n == 0) return 1;

    int ans = 0;
    for (int i = m+1; i <= n; i++)
    ans += solve(n-i, i);
    return ans;
}

void print(int n, int d) {
    // phan tich so n thanh tong cac tu nhien
    // d: a[1], a[2] .. a[d]
    // tim gia tri cua a[d + 1]

    if (n == 0) {
        for (int i = 1; i <= d; ++i) {
            cout << a[i] << " ";
        }
        cout << endl;
        return;
    }

    for (int value = a[d] + 1; value <= n; ++value) {
        a[d + 1] = value;
        print(n - value, d + 1);
    }

}

int main() {
    int n;
    cin >> n;
    // cout << solve(n, 0);
    a[0] = 0;
    print(n, 0);

}