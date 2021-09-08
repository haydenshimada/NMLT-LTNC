#include <iostream>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int n1=s1.size();
    int n2=s2.size();
    while (n1<n2){
        s1='0'+s1;
        n1++;
    }
    while (n2<n1){
        s2='0'+s2;
        n2++;
    }
    string T;
    int du=0;
    for (int i=n1-1;i>=0;i--){
        int tmp=(s1[i]-48)+(s2[i]-48)+du;
        T=char(tmp%10+48)+T;
        du=tmp/10;
    }
    if (du) T='1'+T;
    cout<<s1<<endl<<s2<<endl<<T;
}