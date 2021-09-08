//nhap so nguyen n den khi dc so nguyen duong thi thoi den cac ptu chan, le ,am, duong
#include <iostream>;
using namespace std;
int main()
{
	int n; 
	do {
		cin>>n;
	}
	while (n<=0);
	int c=0,l=0,a=0,d=0,x;
	for (int i=1;i<=n;i++) {
		cin>>x;
		if (x%2==0) c++;
		else l++;
		if (x<0) a++;
		else d++; 
	}
	cout<<c<<' '<<l<<' '<<a<<' ' 
}
	

