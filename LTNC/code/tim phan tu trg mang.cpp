/* 
Viết chương trình 2 hàm nhập mảng và in mảng
Xd thêm hàng tìm kiếm số x có trg mảng k?
*/
#include <iostream>
using namespace std;

void fill_in (int a[], int n);
void print (int a[], int n);
bool find (int a[], int n, int x);

int main(){
    int n;
    cin >> n;
    int a[n];
    fill_in( a , n);
   // print ( a, n);

    int x;
    cin >> x;
    cout << find (a, n , x);
}

void fill_in (int a[], int size){
    for (int i = 0 ; i < size ; i++){
        cin >> a[i];
    }
}

void print (int a[], int size){
    for (int i = 0 ; i < size ; i++)
        cout << a[i] << ' ';
}

bool find (int a[], int n, int x){
    for (int i = 0 ; i < n ; i++){
        if (a[i] == x){
            return 1;
        }
    }
    return 0;
}