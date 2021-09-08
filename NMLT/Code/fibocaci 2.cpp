#include <iostream>
using namespace std;
int main()
{
	int n; cin>>n;
	int f0=0,f1=1,f2;
	for (int i=2;i<=n;i++){
		f2=f1+f0;
		f0=f1;
		f1=f2;
	}
	cout<<f2;
}
