#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float a[10]; for (int i=0;i<10;i++) cin>>a[i];
	int d=1;
	float M=a[0];
	float th[5]; 
	while (d<=5) {
		for (int i=1;i<10;i++){
			M=max(M,a[i]);
			for (int j=0;i<5;j++) th[j]=M;
		}
		for (int i=0;i<10;i++) {
			if (a[i]==M) a[i]=0;
		}
	}
	for (int i=0;i<5;i++) cout<<th[i]<<' ';
}
