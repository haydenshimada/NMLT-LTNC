#include <iostream>
#include <set>
#include <vector>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    
    set <string> dic;
    
    for (int i = 0 ; i < n ; i++){
        string tmp;
        cin >> tmp;
        dic.insert(tmp);
    }

    cin.ignore();
    string s;
    getline (cin, s);
    s = s+ ' ';
    vector <string> word;
    
    string tmp = "";
    for (int i = 0 ; i < s.size(); i++){
        if (s[i] == ' '){
            word.push_back(tmp);
            tmp = "";
        }
        else {
            tmp += s[i];
        }
    }
    for (int i = 0 ; i < word.size(); i++){
        if ( dic.find(word[i]) == dic.end() ) // k ton tai word
        {
            word[i] = "UNK";
        }
    }
    for (int i = 0 ; i < word.size() - 1; i++){
        if (word[i] == word[i+1] && word[i] == "UNK"){
            word.erase(word.begin() + i , word.begin() + i + 1);
            i--;
        }
    }
    for (int i = 0 ; i < word.size(); i++)
        cout << word[i] << ' ';
    cout << endl;
    
    return 0;
}