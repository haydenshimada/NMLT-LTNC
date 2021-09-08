#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


int main()
{
    int n;
    cin >> n;
    double S=0;
    if (n==0) cout << fixed << setprecision(5)<< 0*1.0;
    else {
        for (int i=1;i<=n;i++){
            S=sqrt(3+S);
        }
        cout <<fixed << setprecision(5) << S;
    }
    
}