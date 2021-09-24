// viết chương trình swap 2 số
#include <iostream>
using namespace std;

void swap (int *a, int *b);

int main(){
    int a = 10;
    int b  (20);

    swap (&a , &b); //chú ý phép gọi có dấu &: phép toán lấy địa chỉ ô nhớ
    cout << a << ' ' << b;
    return 0;
}
void swap (int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}