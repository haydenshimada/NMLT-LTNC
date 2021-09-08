// nhap 1 so nguyen rat dai (string) dem so lan xuat hien cac so 
#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int count[10] = {0};
    int n = s.size();
    for (int i = 0; i < n; i ++){
        count[s[i]-48] ++;
    }
    for (int i = 0; i < 10 ; i++){
        if (count[i]) cout << i << ' ' << count[i] << endl;
    }
    return 0;
}