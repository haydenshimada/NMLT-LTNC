#include <iostream>
using namespace std;
int main()
{
    int m,n,Q; cin>>m>>n>>Q;
    int b,c;
    int a[500][500];
    for (int i=0;i<m;i++) {
        for (int j=0;j<n;j++) cin>>a[i][j];
    }
    
	
            for (int k=1;k<=Q;k++) 
            {cin>>b>>c;
            cout<<a[b-1][c-1]<<endl;}
        }
        

