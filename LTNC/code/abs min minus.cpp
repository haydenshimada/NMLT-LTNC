#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0 ; i < n ; i++)
        cin >> a[i];
    int minMinus = abs ( a[0] - a[1] );
    for (int i = 0 ; i < n-1 ; i++){
        for (int j = i+1 ; j < n ; j++){
            if (abs(a[i] - a[j]) < minMinus)
                minMinus = abs(a[i] - a[j]);
        }
    }
    cout << minMinus;
}