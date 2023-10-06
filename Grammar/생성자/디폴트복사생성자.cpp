#include <iostream>
using namespace std;

class A
{
    int p;

public:
    A(int v = 0) : p(v)
    {
        cout << this << " : A(int) called\n";
    }

    A() : p(0) // 디폴트 복사 생성자
    {
        cout << this << " : Default constructor called\n";
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

/*
C++에서 객체의 소멸은 생성과 반대로 역순으로 발생합니다. 따라서, 객체가 생성된 순서와 반대로 소멸자가 호출됩니다.
위에서 주어진 코드에서는 A a1(10)로 a1 객체가 생성되고, 다음으로 A a2(a1)로 a2 객체가 생성됩니다. 그리고 main 함수가 종료되면서 a2 객체가 먼저 소멸하고, 마지막으로 a1 객체가 소멸합니다.

따라서, 소멸자 호출 순서는 다음과 같습니다:
a2 객체의 소멸자 호출
a1 객체의 소멸자 호출
*/