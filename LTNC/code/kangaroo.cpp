#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;
    if (v2 - v1 != 0){
        int t = abs((x1 - x2) / (v2 - v1));
    /* 
    s1 = x1 + v1*t
    s2 = x2 + v2*t
    gặp nhau <=> s1 = s2
    */
        if ( t != 0 && x1 + v1*t == x2 + v2*t)
            cout << "yes";
        else cout << "no";
    }
    else cout << "no";
}