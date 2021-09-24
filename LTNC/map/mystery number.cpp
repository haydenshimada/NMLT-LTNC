/*
2 mảng a[n] và b[n+1]
in ra số mà có trg b nhưng k có trg a
Lưu ý: Hai tập hợp không phải là tập hợp 
và do đó có thể có nhiều phần tử có cùng giá trị số nguyên .
vd
input               output
5                   7
1 1 2 3 4
2 3 4 7 1 1 

Input               Output
5                   5
1 2 3 4 5
1 2 3 4 5 5
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

bool isInclude (int x , int a[], int n){
    for (int i = 0 ; i < n ; i++){
        if (x == a[i])
            return 1;
        else
            continue;
        }
    return 0;
}

int main() { 
    int n;
    cin >> n;
    int a[n], b[n+1];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0 ; i < n+1 ; i++)
        cin >> b[i];
    map <int, int> m_a, m_b;
    for (int i = 0 ; i < n; i++){
        m_a[a[i]]++;
        m_b[b[i]]++;
    }
    m_b[b[n]]++;
    for (int i = 0 ; i < n+1 ; i++){
        if ( isInclude(b[i], a, n) == 1 ){
            if (m_b[b[i]] > m_a[b[i]]){
                cout << b[i];
                break;
            }
        }
        else {
            cout << b[i];
            break;
        }
        
    }
}
