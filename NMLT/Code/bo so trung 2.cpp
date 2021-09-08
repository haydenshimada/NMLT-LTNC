/*
Viết chương trình loại bỏ những số trùng nhau trong mảng.

Đầu vào:
Một dòng duy nhất chứa các số nguyên.
Hãy nhập vào một mảng số nguyên đên khi gặp số -1 thì dừng 
(số -1 là số cuối cùng của mảng). 

Đầu ra:
Một dòng duy nhất chứa kết quả 
sau khi loại bỏ tất cả những số giống nhau khỏi mảng, 
những số còn lại không thay đổi vị trí 
(mỗi số cách nhau 1 dấu cách).

Input	                        Result
2 3 4 1 4 5 2 4 5 6 7 -1        3 1 6 7 -1
1 2 3 4 -1                      1 2 3 4 -1
*/
#include <iostream>
using namespace std;


int main(){
    int n = 1 ;
    int a[1000];
    cin >> a[0];
    while (a[n-1] != -1){
        cin >> a[n];
        n++;
    }

    int b[1000];
    int k = 0;

    for (int i = 0 ; i < n ; i++){
        int count = 0;
        for (int j = 0 ; j < n ; j++){
            if (a[i] == a[j]){
                count++;
            }
        }
        if (count == 1 ) {
            b[k] = a[i];
            k++;
        }
    }

    for (int i = 0 ; i < k ; i++)
        cout << b[i] << ' ';
}
