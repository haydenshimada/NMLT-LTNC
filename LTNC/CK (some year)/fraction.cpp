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

struct Phan_so{
    int ts, ms;
    Phan_so(){}
    Phan_so(int x, int y){
        ts = x;
        ms = y;
    }
    bool toiGian(){
        if (gcd(ts, ms) == 1)
            return 1;
        return 0;
    }
    Phan_so toi_gian(){
        Phan_so tmp;
        int msc = gcd (ts, ms);
        ts /= msc;
        ms /= msc;
        tmp.ts = ts;
        tmp.ms = ms;
        return tmp;

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
    Phan_so operator- (Phan_so other){
        Phan_so s;
        s.ts = (ts*other.ms - other.ts*ms);
        s.ms = ms * other.ms;

        int msc = gcd (s.ts, s.ms);
        s.ts /= msc;
        s.ms /= msc;
        return s;
    }
    Phan_so quy_dong (Phan_so other){
        Phan_so tmp;
        tmp.ts = ts*other.ms;
        tmp.ms = ms * other.ms;
        return tmp;
    }
    void sosanh(Phan_so p2){
        int tmp1 = ts*p2.ms;
        int tmp2 = p2.ts * ms;
        if (tmp1 > tmp2)
            cout << "Phan so 1 > Phan so 2" << endl;
        else if (tmp1 < tmp2)
            cout << "Phan so 1 < Phan so 2" << endl;
        else cout << "Phan so 1 = Phan so 2" << endl;
    }
};

istream & operator>> (istream &in, Phan_so &p){
        in >> p.ts >> p.ms;
        return in;
};
ostream & operator<< (ostream &out, Phan_so &p){
    out << p.ts << '/' << p.ms << endl;
    return out;
};

int main(){
    Phan_so f1, f2;
    cin >> f1 >> f2;
    cout << f1 << f2 << endl;

    if (f1.toiGian())
        cout << "Phan so 1 toi gian " << endl;
    else {
        cout << "Phan so chua toi gian! " << endl
             << "Phan so sau toi gian la " ;
        Phan_so tmp = f1.toi_gian();
        cout << tmp << endl;
    }
    if (f2.toiGian())
        cout << "Phan so 2 toi gian" << endl;
    else {
        cout << "Phan so chua toi gian!" << endl
             << "Phan so sau toi gian la" ;
        Phan_so tmp = f2.toi_gian();
        cout << tmp << endl;
    }
    
    f1.sosanh(f2);

    Phan_so sum = f1 + f2;
    cout << "Tong 2 phan so: " ;
    cout << sum << endl;

    Phan_so minus = f1 - f2;
    cout << "Hieu 2 phan so: ";
    cout << minus << endl;

    cout << "Quy dong 2 phan so: " ;
    Phan_so quydong1 = f1.quy_dong(f2) ;
    Phan_so quydong2 = f2.quy_dong(f1);
    cout << quydong1 << quydong2 << endl;
}