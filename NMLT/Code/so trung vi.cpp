#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n; cin>>n;
    int a[100];
    for (int i=0;i<n;i++) cin>>a[i];
    for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            if (a[i]>a[j]){
                int tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
    int k=n/2;
    if (n%2!=0) cout<<fixed<<setprecision(1)<<a[k]*1.0;
    else cout<<fixed<<setprecision(1)<<(float)(a[k]+a[k-1])*1.0/2;
}