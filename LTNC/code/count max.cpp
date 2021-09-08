#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if (n != 0)
    {
        int a[n];
        for (int i = 0 ; i < n; i++)
            cin >> a[i];
        int maxCount = 0;
        int pos = 0;
        for (int i = 0 ; i < n ; i++){
            int count = 0;
            int p = i;
            for (int j = 0 ; j < n ; j ++){
                if ( a[i] == a[j] ){
                    if ( i <= j)
                        count++;
                    else 
                        break;
                }
            }
            if (count > maxCount ) {
                maxCount = count;
                pos = p;
            }
            if (count == maxCount && a[pos] > a[p]){
                pos = p;
            }
        }
    cout << a[pos];
    }
}