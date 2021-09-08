// nhap 1 so nguyen lon (co the co 100 chu so) tinh tong cac chu so
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string n;
	cin>>n;
	int t=0,m;
	m=n.size();
	for (int i=0;i<m;i++)
		t+=n[i]-48;   // chuyen tu ki tu sang so: tru di ma Ascii cua 0 (- 48)
	cout<<t;
}
