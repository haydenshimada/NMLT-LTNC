#include <iostream>
using namespace std;

int gcd(int a, int b){
    while (b != 0){
        int r = a%b;
        a = b;
        b = r;
    }
    return a;
}
struct Phan_so
{
    int ts, ms;
    Phan_so(){}
    Phan_so(int _ts, int _ms){
        ts = _ts;
        ms = _ms;
    }
    Phan_so operator+ (Phan_so other){
        Phan_so s;
        s.ts = (ts*other.ms + other.ts*ms);
        s.ms = ms * other.ms;

        int msc = gcd (s.ts, s.ms);
        s.ts /= msc;
        s.ms /= msc;
        return s;
    }
    
};

istream & operator>> (istream &in, Phan_so &p){
        in >> p.ts >> p.ms;
        return in;
};
ostream & operator<< (ostream &out, Phan_so &p){
    out << p.ts << '/' << p.ms;
    return out;
};

int main(){
    Phan_so p1, p2;
    cin >> p1 >> p2;
    
    cout << p1 << endl << p2 << endl;

    Phan_so sum = p1 + p2;
    cout << sum << endl;

    return 0;
}