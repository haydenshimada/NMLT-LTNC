/*
viết chương trình liệt kê các số chính phương từ 1 đến n
*/

#include <iostream>
#include <cmath>
using namespace std;

bool ktChinhPhuonng (int x);

int main(){
    int n;
    cin >> n;
    for (long unsigned int i = 1; i <= n ; i++){
        if (ktChinhPhuonng (i) == 1 )
            cout << i << ' ';
    }
    return 0;
}

bool ktChinhPhuonng (int x){
    int check = sqrt(x);
    if (check*check == x)
        return 1;
    return 0;
}
