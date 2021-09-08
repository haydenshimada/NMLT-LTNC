#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str;
	cin>>str;
	getline (cin, str); //lay ca dong, ke ca dau cach
	cout<<str[0]<<endl; //ki tu dau tien
	int n=str.length();
	cout<<str[n-1]<<endl;// ki tu cuoi cung
	cout<<str;
	return 0;
}
