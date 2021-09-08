/* Fionanci
Cho day 1 2 3 5 8
Nhap 1 so nguyen duong n, in ra n so fibonaci dau tien trg day */
#include <iostream>
using namespace std;
int main ()
{
	int n;
	while (1) {     //while(1)=while(true) => just do it
		cin>>n;
		if (n>0) break; 
	}
	int f0=1,f1=1,f2;
	if (n==1) cout<<1;
	else if (n==2) cout<<1<<' '<<1<<' ';
	else {
		cout<<1<<' '<<1<<' ';
		for (int i=3;i<=n;i++) {
			f2=f1+f0;
			f0=f1;
			f1=f2;
			cout<<f2<<' ';
		}
	}
}
