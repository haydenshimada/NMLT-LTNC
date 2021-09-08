#include <iostream>
using namespace std;

const double pi = 3.14;

class circle
{
private:
    int x, y;
    unsigned int bk;
public:
    circle(){}
    circle (int _x, int _y, unsigned int _bk){
        x = _x;
        y = _y;
        bk = _bk;
    }
    double Area(){
        return pi*bk*bk;
    }
    double Perimeter(){
        return 2*pi*bk;
    }

    void Input(){
        cout << "Nhap toa do tam (x,y): ";
        cin >> x >> y;
        cout << "Nhap ban kinh: ";
        cin >> bk;
    }
    void Output(){
        cout << "((" << x << ',' << y << ')' << bk << ')' << endl;
    }
};

int main(){
    circle c;
    c.Input();
    c.Output();
    cout << "Chu vi duong tron: " << c.Perimeter() << endl;
    cout << "Dien tich duong tron: " << c.Area() << endl;
    return 0;
}