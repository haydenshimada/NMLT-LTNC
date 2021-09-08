#include <iostream>
using namespace std;
int main(){
	int n; cin>>n;
	if (n==0) cout<<0;
	else if(n<=2) cout<<1;
	else {
		int f1=1,fn=1;
		int i=3;
		while (i<=n){
			fn=f1+fn;
			swap(f1,fn);
			i++;
		}
		cout<<f1;
	}
}
