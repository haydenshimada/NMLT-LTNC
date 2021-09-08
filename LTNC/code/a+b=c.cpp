/* 
1 mang n>=3
kt xem 3 số co dang a+b=c k?
có thì in ra 3 số
nếu k có thì in ra k có
*/

#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> vt;
    for (int i = 0 ; i < n ; i++){
        int x;
        cin >> x;
        vt.push_back(x);
    }
    for (int i = 0 ; i <= n - 3 ; i++){
        int a = vt[i];
        for (int j = i+1 ; j <= n-2; j++){
            int b = vt[j];
            for (int k = j+1; k <= n-1 ; k++){
                int c = vt[k];
                if (a+b==c || a+c==b || b+c==a)
                    cout << a << ' ' << b << ' ' << c << endl;
                    break;
            }
        }
    }
}