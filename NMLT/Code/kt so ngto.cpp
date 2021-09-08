/*
viết hàm kt 1 số có fai sô nguyên tô k
dùng hàm này in ra tất cả các số ngto có 
trg mảng số nguyên n phần từ
*/

#include <iostream>
#include <cmath>
using namespace std;

bool ktso_ngto(int );
void in_so_ngto(int a[],int n);
int main(){
    int n; cin>>n;
    int a[n];
    for (int i=0;i<n;i++) cin>>a[i];
    
    in_so_ngto(a,n);
}
bool ktso_ngto(int x){
    if (x<2) return false;
    for (int i=2;i<=sqrt(x);i++){
        if (x%i==0) return false;
    }
    return true;
}
void in_so_ngto(int a[],int n){
    for (int i=0;i<n;i++){
        if (ktso_ngto(a[i])==true) cout<<a[i]<<' ';
    }
}
