//khai trien taylor e^x = 1 + x + x^2/2! + x^3/3! + ...
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	unsigned int x;
	cin>>x;
	double temp=1,e=0;
	int i=0;
	while (temp>=0.0001){	
		i++;
		e+=temp;
		temp=temp*x/i;
	}
	cout<<fixed<<setprecision(4)<<e;
}

