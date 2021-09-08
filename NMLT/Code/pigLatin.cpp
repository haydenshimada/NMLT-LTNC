#include <iostream>
#include <string>
using namespace std;

string pigLatin(string );
int main(){
    string str;
    cin>>str;
    pigLatin(str);
}
string pigLatin (string word){
    if (word[0]=='u' || word[0]=='e' || word[0]=='o' || word[0]=='a' || word[0]=='i'){
        word=word+"way";
    }
    else {
        char a=word[0];
        word.erase(word.begin());
        word=word+a+"ay";
    }
    cout<<word;
}