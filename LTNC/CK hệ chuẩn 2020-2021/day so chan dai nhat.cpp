#include <iostream>
#include <vector>
using namespace std;

bool isEven(int x){
    return (x % 2 == 0) ? 1 : 0;
}

int main(){
    unsigned int a;
    vector <unsigned int> vt;
    
    cin >> a;
    while (a != 0){
        vt.push_back(a);
        cin >> a;
    }

    int n = 0;
    while ( !isEven(vt[n]) )
        n++;
        
    int pos = n, len = 0;
    for (int i = n ; i < vt.size() - 1; i++){
        int l = 0;
        int p = i;

        while (vt[i] < vt[i+1] && (i < vt.size()-1) && isEven(vt[i]) && isEven(vt[i+1]))
        {
            l++;
            i++;
        }
        if (len < l){
            len = l;
            pos = p;
        }
    }

    for (int i = pos; i <= len + pos; i++)
        cout << vt[i] << ' ';
}
