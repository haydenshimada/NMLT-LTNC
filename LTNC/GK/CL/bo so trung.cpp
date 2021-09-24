#include <iostream>
using namespace std;

void eraseSimilar(int a[], int &n){
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
}
int main(){
    int n; cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    eraseSimilar(a,n);
    for (int i = 0 ; i < n ; i++){
        cout << a[i] << ' ';
    }
}