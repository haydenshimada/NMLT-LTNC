/* viết hàm hoán đổi giá trị 2 số a,b (int) */
#include <iostream>
using namespace std;

void swap (int a, int b){
     int tmp=a;
     a=b;
     b=tmp;
     cout<<a <<' '<<b<< endl;
 } 
 
 void Swap1 (int &a, int &b){
     int tmp=a;
     a=b;
     b=tmp;
 }

 void Swap2 (int *a,int *b){
     int tmp=*a;
     *a=*b;
     *b=tmp;
     // *a là giá trị trên ô nhớ con trỏ a đang chứa địa chỉ
 }

int main(){
    int a(20);
    int b(10);
    // swap (a,b);
    // Swap1 (a,b);
    Swap2 (&a,&b);
    // dấu & để láy địa chỉ của biến
    cout<< a <<' ' <<b;
    return 0;
}