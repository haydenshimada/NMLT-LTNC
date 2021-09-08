#include <iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n];
    int c=0;
    for (int i=0;i<n;i++) {
        cin>>a[i];
        if (a[i]%2==0) c++;
    }
    for (int i=0;i<n-1;i++)
    {
        for (int j=i;j<n;j++) 
        {
            if (a[j]%2==0)
            {
                int tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
    for (int i=0;i<c-1;i++){
        for (int j=i+1;j<c;j++)
        {
            if (a[i]>a[j])
            {
                int tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    } 
    for (int i=c;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            if (a[i]<a[j]){
                int tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
    for (int i=0;i<n;i++) cout<<a[i]<<' ';
}