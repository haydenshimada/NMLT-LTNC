/*
Nhập vào n xâu kí tự, đếm xem mỗi kí tự xuất hiện bao nhiêu lần, in theo thứ tự bảng chữ cái
Input	    Result
2           d : 2
deer        e : 2
door        o : 2
            r : 2
*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    
    int ch[26];
    for (int i = 0 ; i < 26 ; i++)
        ch[i] = 0;
    for (int i = 1 ; i <= n ; i++){
        string s;
        cin >> s;
        for (int j = 0 ; j < s.size(); j ++){
            int tmp = s[j] - 97;
            ch[tmp]++;  // chữ a theo mã ascii là 97 => trừ đi 97 là 0, tương tự các chữ ti
        }
    }
    for (int i = 0 ; i < 26 ; i++){
        if (ch[i] > 0) 
            cout << char (i + 48 + 49) << " : " << ch[i] << endl;
    }
}