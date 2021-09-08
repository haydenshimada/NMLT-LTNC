/*
f0=0;f1=1
f2 trở đi = tổng 2 số liền trc
viết hàm kt số có fai sô fibonacci k */
#include <iostream>
#include <algorithm>
using namespace std;
string fibonacci (int );
int main()
{
    int n;
    cin>>n;

    cout<< fibonacci(n); //YES / NO

    return 0;
}
string fibonacci (int x )
{
    if (x==0 || x==1) return "YES";
    int f0=1,f1=1,fn;
    while (f1<x)
    {
        f0=f1+f0;
        swap (f0,f1);
        /*  c2
        fn=f0+f1;
        f0=f1;
        f1=fn;
        */
        if (x==fn) return "YES";
    }
    return "NO";
}