/* viết hàm kt số chính phương có hay k
in ra tất cả số chính phương <=n; n nguyên nhập từ bàn phím */
#include <iostream>
#include <cmath>
using namespace std;

bool check_chinhphuong(int );
void insochinhphuong(int );
int main(){
    int n; cin>>n;
    insochinhphuong(n);

    return 0;
}
bool check_chinhphuong (int x)
{
    int tmp=sqrt(x);
    if (tmp*tmp==x) return 1;
    return 0;
}
void insochinhphuong (int n){
    for (int i=1;i<=n;i++)
        if (check_chinhphuong(1)) cout<<i<<' ';
}