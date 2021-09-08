/* khong dung hàm sẵn có 
so sanh 2 chuỗi có giống nhau k (k pb hoa, thường, dấu cách) */
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s1,s2;
    getline (cin,s1);
    getline (cin,s2);
    int m=s1.size();
    int n=s2.size();
    int i=0,j=0;
    int check=0;
    while (s1[i]==' ') {
        i++;
        while (s2[j]==' ') j++;
        if (s1[i]==s2[j] || s1[i]==s2[j]-32 || s1[i]==s2[j]+32) {
            check++;
        } 
        else {
            break;
            cout<<"NO";
        }

    return 0;
}