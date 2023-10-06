#include <iostream>
using namespace std;

class A
{
    int p;

public:
    A(const A &obj) // copy constructor : const A &obj라는 A 클래스의 상수 참조를 인자로 받아, obj 객체의 p 멤버 변수 값을 복사
    {
        p = obj.p;
        cout << this << " : A(const A&) called\n";
    }
    A(int v = 0) : p(v) // parameter를 받는 constructor
    {
        cout << this << " : A(int) called\n";
    }
    ~A()
    {
        cout << this << " : ~A() called\n";
    }
    int getP()
    {
        return p;
    }
    void setP(int v)
    {
        p = (v < 0) ? 0 : v;
    }
};

int main()
{
    A a1(10), a2(a1);
    cout << a1.getP() << endl;
    cout << a2.getP() << endl;
}