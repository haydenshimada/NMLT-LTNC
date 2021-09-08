/* nhap so con va so chan
tim so ga, cho
DUNG ! FOR */
/* ga + cho = con
   2ga + 4cho = chan */
#include <iostream>
using namespace std; 
int main()
{
	int con, chan,ga; cin>>con>>chan;
	for (ga =1;ga<con;ga++) {
		if (ga*2 + (con-ga)*4== chan) {
			cout<<"ga: "<<ga<<endl
				<<"cho: "<<con-ga;
		}
	}
}
