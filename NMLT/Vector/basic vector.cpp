/* nhập vào 1 mảng số nguyên n phần tử
tính tổng min và max của mảng 
DÙNG VECTOR */
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >>n;
    vector <int> vt;
    for (int i=1;i<=n;i++){
        int x;
        cin>>x;
        vt.push_back(x);
    }
    for (int i=0;i<n;i++){
        cout<<vt[i]<<' ';
        // cout<<vt.at(i)<<' ';
    }
    /* c2 for (auto it =vt.begin();it!=vt.end();it++) cout<<*it<<' '<<endl;
     c3 for (auto it:vt) cout<<it<<' '<<endl; */
     // vt.erase(vt.begin());
    return 0;
}