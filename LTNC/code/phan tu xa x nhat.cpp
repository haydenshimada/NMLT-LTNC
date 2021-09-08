#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[100];
    for (int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    int x;
    cin >> x;
    int max = abs(x - a[0]);
    int pos = 0;
    for (int i = 1; i < n ; i++){
        if (abs(x - a[i]) > max){
            max = abs(x- a[i]);
            pos = i;
        }
    }
    cout << a[pos]<< endl;
}