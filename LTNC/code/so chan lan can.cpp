/* cho 1 mang so nguyen 
liệt kê các gtri là số chãn 
và ít nhất 1 lân cận là số chẵn*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> vt;
    for (int i = 0 ; i < n ; i++){
        int x;
        cin >> x;
        vt.push_back(x);
    }
    for (int i = 0 ; i < n ; i++){
        if(vt[i] % 2 == 0 && (vt[i+1] % 2 == 0 || vt [i-1] % 2 == 0 )){

            cout << vt[i] << " ";
        }
    }
    return 0;
}