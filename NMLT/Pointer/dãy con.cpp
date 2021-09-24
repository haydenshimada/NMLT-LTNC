/* cho 2 dãy số nguyên a(n ptu) và b (m ptu)
Viết program kt xem a có fai là dãy con liên tiếp
của b hay kt

input:
2
1 3
4 
1 2 3 5
output: 
YES
*/
#include <iostream>
using namespace std;

void nhap_mang ( int *, const int &);
void in_mang (int *, const int &);
bool is_in (const int *a, const int *b, const int &m, const int &vt);
string check ( const int *a, const int &n, const int *b, const int &m);

int main()
{
    int n;
    cin >> n;
    int *a = new int [n];
    nhap_mang (a,n);

    int m;
    cin >> m;
    int *b = new int [m];
    nhap_mang (b,m);

    cout << check (a, n ,b ,m);

    delete [] b;
    delete [] a;
    return 0;
}

void nhap_mang ( int *a, const int &n){
    for (int i =0 ; i< n ; i++)
        cin >> *(a+i);
}
void in_mang (int *a, const int &n){
    for (int i =0 ; i< n ;i++)
        cout << *(a+i) <<' ';
    cout << endl;
}

// kt a co appear trg b start at vi tri vt hay k
/*  1 3
    2 5 4 5 1 3 4 5 */
bool is_in (const int *a, const int &n, const int *b, const int &m, const int &vt)
{   
    for (int i = 0 ; i < n ;i ++){
        if ( a[i] != b[vt+i] ) return false ;
    return true;
    }
}
string check ( const int *a, const int &n, const int *b, const int &m){
    for (int i = 0; i <= m - n; i++ ){
        if (is_in (a, n , b , m, i)){
            return "YES";
        }
        return "NO";
    }
}