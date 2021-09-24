#include <iostream>
#include <cstring>
#include <map>
#include <vector>
#include <string>
using namespace std;
int main()
{
    map <string, int> m;
    string org;
    getline(cin, org);
    int n; cin >> n;
    string s2;
    vector<string> vt;
    for (int i = 0; i <= org.size(); i++)
    {
        if (org[i] == ' ')
        {
            vt.push_back(s2);
            s2 = "";
        }
        else if (org[i] == '\0')
        {
            vt.push_back(s2);
        }
        else
        {
            s2 += org[i];
        }
    }

    for (int i = 0; i < vt.size(); i++)
    {
        if (m.find(vt[i]) == m.end())
        {
            m.insert((pair<string, int>(vt[i], 1)));
        }
        else {
            m[vt[i]]++;
        }
    }
    for (int i = 0; i < vt.size(); i++)
    {
        for (map<string, int>::iterator it = m.begin(); it != m.end(); it++)
             {
            if (vt[i] == it->first && it->second >= n) cout << it->first << ' ';

             }
    }
}