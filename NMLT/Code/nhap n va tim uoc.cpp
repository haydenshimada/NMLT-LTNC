/*nhap so nguyen n den khi dc so nguyen duong thi thoi
DUNG WHILE 
in ra cac so la uoc cua n*/
#include <iostream>
using namespace std;
int main(){
	int n; cin>>n;
	while (n<0) cin>>n;
	int i=1;
	do{
		if (n%i==0) cout<<i<<' ';
		i++;
	}while (i<=n);
}
