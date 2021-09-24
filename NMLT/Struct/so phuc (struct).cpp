#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

struct Complex {
    int a, b;
    double abs(){
        double abs = sqrt (a*a +b*b);
        return abs;
    }
    Complex (int _a, int _b){
        a = _a;
        b = _b;
    }
    Complex () {}
    void print(){
        if (a !=0){
            if (b!=0){
                if (b == 1)
                    cout << a << "+i" << endl;
                else if ( b == -1 )
                    cout << a << "-i" << endl;
                else if ( b > 0)
                    cout << a << '+' << b << 'i' << endl;
                else
                    cout << a << b << 'i' << endl;
                
            }
                
            else 
                cout << a << endl;
        }
        else {
            if (b!=0){
                if (b == 1)
                    cout << 'i' << endl;
                else if ( b == -1 )
                    cout << "-i" << endl;
                else
                    cout << a << b << 'i' << endl;
            }
            else 
                cout << 0 << endl;
        }
    }
};
Complex add (Complex a, Complex b){
    int sumA = a.a + b.a;
    int sumB = a.b + b.b;
    Complex sum (sumA, sumB);
    return sum;
}

int main(){
    /*int inputA, inputB;
    cin >> inputA >> inputB;
    Complex x;
    x.a = inputA;
    x.b = inputB;
    x.print();
    cout << fixed << setprecision(2) << x.abs();
    */
    int xa, xb, ya, yb;
    cin >> xa >> xb >> ya >> yb;
    Complex x(xa, xb), y(ya, yb);
    x.print();
    y.print();
    add(x,y).print();
}