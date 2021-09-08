#include <iostream>
using namespace std;

int position(int number, int k);
int reverse (int number);

int main(){
    int T;
    cin >> T;
    for (int i=1;i<=T;i++){
        int n,x;
        cin >> n >> x;
        cout<<position(n,x)<<endl;
    }
}
int reverse (int number){
    int tmp=0;
    while (number!=0){
        tmp=tmp*10+number%10;
        number=number/10;
    }
    return tmp;
}
int position(int number, int k){
    number = reverse (number);
    int i=0;
    while (number!=0){
        int tmp=number%10;
        i++;
        number=number/10;
        if (tmp==k) {
            break;
            return i;
            }
        else return -1;
    }
}