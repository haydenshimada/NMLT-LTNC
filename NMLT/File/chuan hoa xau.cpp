#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    string address;
    cin >> address;
    // xau1.txt || xau2.txt
    ifstream file (address);
    string s;
    getline (file, s);
    if (file){
        while (!file.eof()){
            getline (file, s);
            s = ' ' + s;
            for (int i = 1 ; i < s.size(); i++){
                if ( s[i-1] == ' ' && s[i] != ' '){
                    s[i] = (char) toupper(s[i]);
                }
                else if (s[i-1] != ' ' && s[i] != ' ')
                    s[i] = (char) tolower(s[i]);
            }
            s.erase ( s.begin() );
            cout << s << endl;
        }
    }
}