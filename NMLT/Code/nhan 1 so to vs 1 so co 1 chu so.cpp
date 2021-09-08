#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int x;
    cin>>x;
    string T;
    int du=0;
    for (int i=s.size()-1;i>=0;i--){
        int tmp=(s[i]-48)*x+du;
        T=char(tmp%10+48)+T;
        du=tmp/10;
    }
    if (du) T=char(du+48)+T;
    cout<<s<<endl<<x<<endl<<T;
    }
