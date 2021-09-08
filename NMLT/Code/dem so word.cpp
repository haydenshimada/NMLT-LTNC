/*nhập 1 chuỗi kí tự, đếm xem có bn từ(word)
Vd:     nguyễn     văn     hưởng
-> 3 từ
*/
#include <iostream>
#include <string>
using namespace std;
int main(){
    string str; 
    getline (cin, str); //lấy cả dòng
    str=' '+str;
    int dem=0;
    for (int i=0;i<str.size()-1;i++){
        if ( str[i] == 32 && str[i+1] != 32 ) dem++;
    }
    cout<<dem;
    str.erase(str.begin());
    return 0;
}