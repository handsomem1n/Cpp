// const 수식어도 function signiture에 포함 -> function overloading 가능

#include <iostream>

using namespace std;

class A
{
    const int c;
    const int hundred = 100;
    int v;

public:
    A(int n = 0) : c(n) {}

    void show() const // function overloading
    {
        cout << this << " / " << c <<", ";
        cout << hundred << " const show ()\n";
    }
    void show() // function overloading
    {
        cout << this << " / " << c << ", ";
        cout << hundred << " show()\n";
    }
};

int main()
{
    const A cA(5);
    A obj(10);
    cA.show();
    obj.show();
}