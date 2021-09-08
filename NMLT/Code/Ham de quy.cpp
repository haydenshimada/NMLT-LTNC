/* HAM DE QUY */
long long giaithua (int x)
{
    if (x == 0 ) return 1;
    return (x*giaithua (x-1)); //3*2*1*1
}
/* chỉ dùng khi làm bài toán lớn, vì nó rất tốn bộ nhớ (lưu trữ nhiều)
giải quyết đc thông qua bài toán bé hơn giống hệt nó */

for (int i=1;i<=n;i++) 
    cout<<fibonacci(i)<<' ';
long long fibonacci (int n){
    if (n<=1) return 1;
    return (fibonacci(n-2) + fibonacci(n-1));
}

int ucln (int a, int b)
{
    if (a*b==0) return (a+b);
    if (a>b) return ucln (a*b,b);
    return ucln (a,b*a);
}