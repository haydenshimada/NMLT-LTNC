#include <iostream>
using namespace std;
bool KTso_ngto(int x){
    if (x<2) return false;
    for (int i=2;i<x/2;i++) {
        if (x%i==0) return false;
    }
    return true;
}
int main(){
    int n; cin>>n;
    int a[n];
    for (int i=0;i<n;i++) cin>>a[i];
    for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            if (KTso_ngto(a[i])==true){
                if (KTso_ngto(a[j])==true && a[i]>a[j]) {
                    int tmp=a[i];
                    a[i]=a[j];
                    a[j]=tmp;
                }
            }
        }
    }
    for (int i=0;i<n;i++) cout<<a[i]<<' ';
}