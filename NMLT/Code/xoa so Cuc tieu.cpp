#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[100];
    for (int i=0;i<n;i++) cin>>a[i];
    bool co= true;
    while (co){
        co =0;
        for (int i=1;i<n-1;i++)
            if (a[i]<a[i+1] && a[i]<a[i-1])
            {
                co =true;
                for (int j=i;j<n-1;j++) 
                    a[j]=a[j+1];
                    i--;
                    n--;
            }
    }
    for (int i=0;i<n;i++) cout<<a[i]<<' ';
    return 0;
}