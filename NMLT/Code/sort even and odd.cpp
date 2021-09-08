/* nhap 1 mang
sắp xếp chẵn sang trái, lẻ sang phải 
chẵn tăng, lẻ giảm
KHÔNG DÙNG MẢNG PHỤ, DÙNG VECTOR */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int check(int a,int b){
    return (a>b);
}
int main(){
    int n; cin>>n;
    vector <int> vt;
    for (int i=1;i<=n;i++){
        int x;
        cin>>x;
        vt.push_back(x);
    }
    int i=0,j=vt.size()-1;
    while (i<j){
        while (i<j && !(vt[i]%2)) i++;
        while (i<j && (vt[j]%2)) j--;
        swap (vt[i],vt[j]);
    }
    sort (vt.begin(),vt.begin()+i); //tang
    sort (vt.begin()+i,vt.end(),check); //giam
    for (auto it =vt.begin();it!=vt.end();it++) cout<<*it<<' ';  //in ra vector
}