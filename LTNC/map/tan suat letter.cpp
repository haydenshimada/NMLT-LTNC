/*
Nhập vào n xâu kí tự, đếm xem mỗi kí tự xuất hiện bao nhiêu lần, in theo thứ tự bảng chữ cái
Input	    Result
2           d : 2
deer        e : 2
door        o : 2
            r : 2

*/

#include <iostream>
#include <map>
using namespace std;
int main(){
    int n;
    cin >> n;
    map <char, int> m;
    while (n--){
        string s;
        cin >> s;
        for (int i = 0 ; i < s.length() ; i++){
            if ( m.find(s[i]) == m.end() )
                m.insert (pair <char, int> (s[i], 1));
            else 
                m[s[i]]++;
        }
    }
    for (map <char, int> :: iterator it = m.begin() ; it != m.end() ; it++)
        cout << it->first << " : " << it->second << endl;
    
}