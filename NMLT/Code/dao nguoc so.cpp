//tim co dao nguoc cua n nguyen duong la m
#include <iostream>
using namespace std;
int main()
{
	unsigned int n,m=0; cin>>n;
	int remain;
	while (n!=0) {
		remain=n%10;
		m=m*10+remain;
		n=n/10;
	}
	cout<<m;
}
