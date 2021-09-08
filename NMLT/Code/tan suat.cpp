#include <iostream>
using namespace std;

int tansuat(string s);

int main(){
    string str;
    cin>>str;
    tansuat (str);
}
int tansuat (string s){
    int dem=0;
    for (int i = 0; i < s.size() ; i++){
        dem = 0;
        for (int j = 0; j < s.size(); j++){
            if (s[i] == s[j] || s[i] == (s[j]-32) || s[i] == (s[j]+32) ){     //A vs a là 1. Ko thì bỏ 2 hoặc cuối
                if (i <= j) dem++;
                else break;
            }
        }
        if (dem != 0) {
            if (s[i] >= 'A' && s[i] <= 'Z') cout << char(s[i]+32) << ' '<< dem << endl;
            else cout<< s[i] << ' '<< dem << endl;
    }
}
}