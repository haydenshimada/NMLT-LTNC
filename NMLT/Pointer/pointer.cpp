#include <iostream>
using namespace std;
int main (){
    int n;
    cin >> n;
    
    int *p = &n; // p chứa địa chỉ
    
    cout << *p ;  // *p chứa giá trị ở 1 ô nhớ
    
    
    return 0;
}