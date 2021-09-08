#include <iostream>
using namespace std;
int main(){
    int n;cin>>n;
    long x=0,y=0,z=0,t=0,w=0;
    for (int a=1;a<n;a++){
        x=a*a*a*a*a;
        for (int b=a+1;b<n;b++){
            y=b*b*b*b*b;
            for (int c=b+1;c<n;c++) {
                z=c*c*c*c*c;
                for (int d=c+1;d<n;d++){
                    t=d*d*d*d*d;
                    for (int e=n;e>d+1;e--){
                        w=e*e*e*e*e;
                        if (x+y+z+t==w) {
                            cout<<a<<"^5 + "<<b<<"^5 + "<<c<<"^5 + "<<d<<"^5 = "<<e<<"^5";
                            break;
                    }
                }
            }
        }
    }
}
}