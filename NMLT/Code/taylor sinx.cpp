#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    double x; cin>>x;
    double sin=0;
    int i=2;
    double temp=1;
    while (fabs(temp)>=0.0001) {
        sin=sin+temp;
        temp=temp*(-1)*x*x/(i*(i+1));
        i+=2;
    }
    cout<<sin;
}