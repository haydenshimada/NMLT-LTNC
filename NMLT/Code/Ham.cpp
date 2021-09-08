/* viết hàm void input (int a[i] , int spt): để nhập 1 mảng có spt
void output(int a[i] , int spt): in mảng ra */
#include <iostream>
using namespace std;

void input (int a[], int spt);   // khai báo nguyên mẫu hàm, chính là chữ kí của hàm
void output (int a[], int spt);
void xoa (int a[],int &spt, int x);
void sapxepgiamdan(int a[], int spt);

int main() // tham số dòng lệnh???
{
    int n; cin>>n;
    int a[n];   //mảng đầy
    input (a,n);  //gọi hàm nhập mảng 
    //output(a,n);  // gọi hàm in mảng
    
    //sapxep (a,n);
    //output(a,n);

    int x; cin>>x;
    xoa (a,n,x); //viết hàm xóa tất cả các số x có trg mảng
    output(a,n);

    //sapxepgiamdan(a,n);
    //output(a,n);

    return 0;
}
void input (int a[], int spt)   // định nghĩa hàm
{
    for (int i=0;i<spt;i++) cin>>a[i];
}
void output (int a[], int spt){
    for (int i=0;i<spt;i++) cout<<a[i]<<' ';
    cout<<endl;
}
void xoa (int a[],int &spt, int x) {
    for (int i=0;i<spt;i++){
        if (a[i]==x){
            for (int j=i;j<spt-1;j++){
                 a[j]=a[j+1]; 
            }
            spt--;
            i--;  //kt số ms vừa nhập vào vị trí i;
        }
    }
}
void sapxepgiamdan(int a[], int spt)
{
    for (int i=0;i<spt-1;i++){
        for (int j=i+1;j<spt;j++){
            if (a[i]<a[j]){
                int tmp =a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
}