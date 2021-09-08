/* Nhap 1 so NGUYEN DUONG n
kt so co fai la so nguyen to */
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	unsigned int n; cin>>n;
	int d=0;
	if (n>=2){
	
	for (int i=2;i<=sqrt(n);i++){
		if (n%i==0) d++;
	}	
	if (d==0) cout<<n<<" la so nguyen to";
	else cout<<n<<" khong phai la so nguyen to";
}}
