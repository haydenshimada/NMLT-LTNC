#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    unsigned int n; cin>>n;
    string s;
    while (n){
        if (n%2==0) s='0'+s;
        else s='1'+s;
        n=n/2;
    }
    cout<<s;
    return 0;
}
