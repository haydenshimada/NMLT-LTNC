/*in ra chiec no
VD n=2
*   *
** **
*****
** **
*   *
           */
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n; cin>>n;
	for (int i=-n;i<=n;i++){    // i la hang; j la cot;
		for (int j=-n;j<=n;j++){
			if (abs(i)<=abs(j)) cout<<"*";
			else cout<<' ';
		}
		cout<<endl;
	}
}
