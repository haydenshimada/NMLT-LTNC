/* in ra hinh kim cuong */
#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n; cin>>n;   /* n la so tang tren, duoi (k tinh o giua)
						VD n=2
								*
			                   ***
			                  *****
			                   ***
			                    *    */
	for (int i=-n;i<=n;i++) {
		for (int j=-n;j<=n;j++) {
			if (abs(i)+abs(j)<=n) cout<<'*';
			else cout<<" ";
		}
		cout<<endl;
	}
}
