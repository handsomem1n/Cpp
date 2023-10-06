#include <iostream>
using namespace std;

class A
{
    int p;
    const int c;

public:
    A(int v = 0, int c = 0) : p(v), c(c) // c(c)에서 각 c가 무엇을 가리키는지 chk
    {
        cout << this << " : A(int, int) called \n";
    }

    ~A()
    {
        cout << this << " ~A() called \n";
    }

    int getP()
    {
        return p;
    }

    int getC()
    {
        return c;
    }

    void setP(int v)
    {
        p = (v < 0) ? 0 : v;
    }
};

A a2(2, 3); // 전역이라 먼저 호출되고 마지막에 소멸됨.

int main()
{
    A a1(10);
    cout << a1.getP() << endl;
    cout << a1.getC() << endl;
    cout << a2.getP() << endl;
    cout << a2.getC() << endl;
}