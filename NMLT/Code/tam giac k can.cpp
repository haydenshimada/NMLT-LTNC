#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if ( n <=1 || n >= 10) cout << "NO DISPLAY";
    else {
        for (int i=1;i<=n;i++){
            for (int j=1;j<=i*2-1;j++){
                cout <<'*';
            }
            cout<<endl;
        }
    }
}