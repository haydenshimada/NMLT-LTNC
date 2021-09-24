#include <iostream>
#include <sstream>
#include <vector>
#include <map>
using namespace std;
int main(){
    vector <string> vt;
    stringstream ss;
    string s;
    getline(cin, s);
    ss << s;
    while (!ss.eof()){
        string tmp;
        ss >> tmp;
        vt.push_back(tmp);
    }

    int n;
    cin >> n;

    map <string, int> m;
    for (int i = 0 ; i < vt.size() ; i++){
        if ( m.find(vt[i]) == m.end() )
            m.insert( pair<string, int> (vt[i], 1));
        else 
            m[vt[i]]++; 
    }
    for (int i = 0; i < vt.size(); i++)
        for (map<string, int>::iterator it = m.begin(); it != m.end(); it++)
            if (vt[i] == it->first && it->second >= n) 
                cout << it->first << ' ';
}