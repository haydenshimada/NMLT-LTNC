// nhap 2 so a,b. Tim UCLL va BCNN
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a,b; cin>>a>>b;
	a=abs(a); b=abs(b);
	while (a!=b){
		if (a>b) a=a-b;
		else b=b-a;
	}cout<<"UCLL: "<<a;
	/* C2:
	while (a*b!=0){
		if (a>b) a=a%b;
		else b=b%a;
		}
	cout<<a+b; */
}
	
