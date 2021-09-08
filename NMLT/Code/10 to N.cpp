#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Nhap phan nguyen: ";
	cin>>a;
	cout<<"Co so: " ;cin>>b;
	int dem=0;
	int c=a,d=b;
	while ( c!=0) { dem+=1;
		int d=b;
		int x=c%d;
		c=c/d;
	}
	int s[dem];
	while ( a!=0) {
		for (int i=0;i<dem;i++) {
			int x=a%b;
			a=a/b;
			s[i]=x;
		}
	}
	for (int i=dem-1;i>=0;i--) cout<<s[i];
}
