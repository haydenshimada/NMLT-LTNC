// liệt kê các dãy con tăng trong mảng
#include <iostream>
#include <vector>
using namespace std;

void day_con_tang(const int a[], const int n){
    for (int i = 0 ; i < n ; i++){
        vector <int> vt = {};
        vt.push_back(a[i]);
        for (int j = i+1 ; j < n; j++){
            if ( a[j] > vt[vt.size()-1] ){
                vt.push_back(a[j]);
                for (int a = 0 ; a < vt.size() ; a++){
                    cout << vt[a] << ' ' ;
                }
                cout << endl;
            }

            else break;
        }
        
    }
    cout << endl;
}

int main(){
    int n;
    cin >> n;
    int a[100];
    for (int i = 0 ; i < n ; i++)
        cin >> a[i];
    day_con_tang(a, n);
}