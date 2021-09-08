#include <iostream>
using namespace std;
int main(){
    int a[9];
    int head=3, tail=3;
    for (int i=0;i<9;i++) cin>>a[i];
    for (int i=0;i<9;i++) {
        if (head<0 || tail<0){
            break;
            cout<<"invalid attack";}
        else if (head==0 && tail==0){
            break;
            cout<<"You slayed the Dragon";
        }
        else {
        switch (a[i]){
            case 1:
                head--;
                head++;
                break;
            case 2:
                tail--;
                tail+=2;
                break;
            case 3:
                head-=2;
                break;
            case 4:
                tail-=2;
                head++;
                break;
            default: cout<<"invalid attack"; break;
        }}
    }
    if (head==0 && tail ==0) cout<<"You slayed the Dragon";
    else if (head<0 || tail <0) cout<<"invalid attack"; 
    else cout<<"You die";
}