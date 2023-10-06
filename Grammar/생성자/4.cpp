#include <iostream>
using namespace std;

class A
{
    const int c;
    int &r;

public:
    A(int &x, int c = 0) : c(c), r(x) // = A(int &x, int c = 0) : r(x), c(c) // c(c)에서 각 c가 무엇을 가리키는지 chk
    // A(int &x, int c = 0) : r(x), c(c) 
    {
        cout << this << " : A(int&, int) called \n";
    }
    ~A() { cout << this << " : ~A() called\n"; }
    int getR() { return r; }
    int getC() { return c; }
    void setR(int v) { r = v; }
};

int g;
A a2(g, 3); // g 변수의 reference를 a2 객체에 전달

int main()
{
    int i = 100;
    A a1(i, 10); // i 변수의 reference를 a1 객체에 전달
    cout << "a1.getR() : " << a1.getR() << endl;
    
    a1.setR(-1);
    cout << "a1.getR() : " << a1.getR() << " i : " << i << endl;
    cout << "a1.getC() : " << a1.getC() << endl;
    cout << "a2.getR() : " << a2.getR() << endl;
    
    a2.setR(-2);
    cout << "a2.getR() : " << a2.getR() << " g : " << g << endl;
    cout << "a2.getC() : " << a2.getC() << endl;
    return 0;
}