/*nhap 1 so n
in ra hcn vs cac phan tren dg cheo chinh la *, duoi la .
*/
#include <iostream>
using namespace std;
int main()
{
	int n; cin>>n;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			if (i>j )cout<<'.';
			else cout<<'*';
		}
		cout<<endl;
	}
}
