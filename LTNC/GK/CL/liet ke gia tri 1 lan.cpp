#include <iostream>
#include <map>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0 ; i < n ; i++)
        cin >> a[i];
    map <int , int> m;
    for (int i = 0 ; i < n ; i++){
        if ( m.find(a[i]) == m.end() )
            m.insert( pair<int, int> (a[i], 1));
        else 
            m[a[i]]++; 
    }
    for (map <int, int> :: iterator it = m.begin(); it != m.end(); it++)
        if (it->second == 1){
            cout << it->first << ' ';
        }
}