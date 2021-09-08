#include <iostream>
using namespace std;
int main(){
    int n; 
    cin>>n;
    int a[100];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    
    for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            if (a[i]==a[j]){
                int index=j;
                for (int k=index+1;k<n;k++){
                    a[k-1]=a[k];
                }
                n--;
            }
        }
    }
    for (int i=0;i<n;i++) cout<<a[i]<<' ';
}