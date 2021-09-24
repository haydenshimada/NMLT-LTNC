/*
Nhập vào n xâu kí tự, đếm xem mỗi kí tự có bao nhiêu từ chứa nó, in theo thứ tự bảng chữ cái

For example:

Input	    Result
2           d : 2
deer        e : 1
door        o : 1
            r : 2
*/

#include <iostream>
#include <map>
#include <vector>

bool isInclude(char c, string s)
{
    for (int i = 0 ; i < s.size(); i++){
        if (c == s[i])
            return 1;
    }
    return 0;
}

using namespace std;
int main(){
    int n;
    cin >> n;
    vector <string> word_lists;
    map <char, int> m;

    for (int i = 0 ; i < n ; i++){
        string word;
        cin >> word;
        word_lists.push_back(word);
    }
}
