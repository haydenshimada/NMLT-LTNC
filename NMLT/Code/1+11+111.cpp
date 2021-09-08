#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int t=1;
    long long S=0;
    for (int i=1; i <= n; i++)
    {
        S=S+t;
        t=(t*10)+1;
    }
    cout <<S;
}