
#include <iostream>

using namespace std;

struct Point
{
    double x, y;
    Point() {};
    Point (double _x, double _y) : x(_x) , y(_y){};
    void print (){
        cout << "Toa do x: " << x << endl;
        cout << "Toa do y: " << y << endl;
    }
};

void ThamTri(Point A)
{
    cout << "Địa chỉ tham trị  " << &A << endl;
}

void ThamBien(Point &A)
{
    cout << "Địa chỉ tham biến " << &A << endl;
}

int main()
{
    Point A(2, 3);
    A.print();
    cout << "Dia chi: " << &A << endl;
    ThamTri(A);
    ThamBien(A);
    return 0;
}