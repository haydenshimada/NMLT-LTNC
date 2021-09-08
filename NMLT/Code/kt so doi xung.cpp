#include <iostream>
using namespace std;

string ktdx(int number);

int main(){
    int T; cin>>T;
    for (int i=1;i<=T;i++){
        int n;
        cin >> n;
        cout<<ktdx(n)<<endl;
    }
}
string ktdx(int number){
    int dx=0; 
    int tmp=number;
    while (tmp!=0){
        dx=dx*10 + tmp%10;
        tmp=tmp/10;
    }
    if (dx==number) return "yes";
    return "no";
}