/*
viết hàm kt dãy số có fai dãy tăng hay k
viết hàm kt dãy số (mảng) có fai là dãy giảm k
giảm/tăng thực sự
dùng 2 hàm trên kt xẽm 1 dãy số nguyên (mảng) n ptu (n<20) 
nhập vào có fai là
"dãy tăng", "dãy giảm" hay "vô danh"
*/
#include <iostream>
using namespace std;

void nhapmang(int a[],int n);
bool daytang(int a[],int n);
bool daygiam (int a[],int n);

int main(){
   
    int n;
    cin >> n;
    
    int a[n];
    nhapmang(a, n);
    
    if (daytang(a, n)) cout<<"DAY TANG";
    else if (daygiam(a,n)) cout<<"DAY GIAM";
    else cout<<"VO DANH";

    /* k dung ham
    int co //= 1 (day tang), co = -1 (day giam), co = 0 (vo danh)
    if (a[0] < a[1]) co =1 // DAY TANG
    else (a[0] > a[1]) co=-1; //DAY GIAM
    else {
        cout<<"VO DANH";
    }
    for (int =1;i<n;i++){
        if ((co == 1 && a[i] >= a[i+1]) || (co == -1 && a[i]<=a[i+1]))
            {
            cout<<"VO DANH";
        }
    }
    if (co==1) cout<<"DAY TANG";
    else cout<<"DAY GIAm";
    */
    return 0;
}
void nhapmang(int a[],int n){
    for (int i=0;i<n;i++) cin>>a[i];
}
bool daytang(int a[],int n){
    for (int i=0;i<n-1;i++){
        if (a[i]>=a[i+1]) return false;
    } 
    return true;
}
bool daygiam (int a[],int n){

    for (int i=0;i<n-1;i++){
        if (a[i]<=a[i+1]) return false;
    } 
    return true;
}
