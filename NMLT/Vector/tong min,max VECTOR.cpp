#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >>n;
    vector <int> vt;
    for (int i=1;i<=n;i++) {
        int x;
        cin>>x;
        vt.push_back(x);
    }
    int min=*min_element(vt.begin(),vt.end());
    int max=*max_element(vt.begin(),vt.end());
    cout<<min+max;
    return 0;
}