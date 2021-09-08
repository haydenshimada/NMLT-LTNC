#include<bits/stdc++.h>

using namespace std;

int main(){

	int n,a[1001];

	cin>>n;

	for(int i=1;i<=n;i++)

		cin>>a[i];

	sort(a+1,a+1+n);

	for(int i=n;i>=3;i--)

		for(int j=1;j<=i;j++){

			int l=1,r=j;

			while(l<=r){

				int mid=(l+r)/2;

				if(a[i]-a[j]==a[mid]){

					cout<<a[i]<<" "<<a[j]<<" "<<a[mid]<<endl;

					break;

				}

				else{

					if(a[i]-a[j]<a[mid])

						r=mid-1;

					else

						l=mid+1;

					

				}

			}

		}

}