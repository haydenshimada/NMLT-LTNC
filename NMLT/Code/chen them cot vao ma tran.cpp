#include <iostream>
using namespace std;
int main(){
    int m,n; cin>>m>>n;
    int a[100][100];
    for (int k=0;k<m;k++){
        for (int h=0;h<n;h++) cin>>a[k][h];
    }
    int i,x; cin>>i>>x;
    for (int k=0;k<m;k++){int tmp1=x;
        for (int h=i-1;h<=n;h+=2){
            int tmp2=a[k][h];
            a[k][h]=tmp1;
            tmp1=a[k][h+1];
            a[k][h+1]=tmp2;
        }
        
    }
    for (int k=0;k<m;k++){
        for (int h=0;h<=n;h++) cout<<a[k][h]<<' ';
        cout<<endl;
    }
}