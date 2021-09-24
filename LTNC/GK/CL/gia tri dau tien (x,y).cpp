#include <iostream>
using namespace std;

int firstValue(int a[], const int &n, int x, int y){
    for (int i = 0 ; i < n; i++){
        if (a[i] > x && a[i] < y){
            return a[i];
        }
    }
    return -1;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0 ; i < n ; i++)
        cin >> a[i];
    int x, y;
    cin >> x >> y;
    cout << firstValue(a, n, x, y);
}