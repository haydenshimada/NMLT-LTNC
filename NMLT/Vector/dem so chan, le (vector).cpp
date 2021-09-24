/*nhap mang sp nguyen n
dem so phan tu chan */
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n; cin>>n;
    vector <int> myvector;
    for (int i=0;i<n;i++){
        int x;
        cin>>x;
        myvector.push_back(x);
    }
    int chan=0,le=0;
    for (int i=0;i<myvector.size();i++)
        {
            if (myvector[i]%2==0) chan++;
            else le++;
        }
    cout<<chan<<' '<<le;
    return 0;
}