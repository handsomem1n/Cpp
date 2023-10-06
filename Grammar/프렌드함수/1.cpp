#include <iostream>
using namespace std;

class A {
    int x;
    public :
    void setX(int i) { x = i;}
    friend int Double (A a);
};
int Double(A a)
{
    return (a.x * 2);
}
int main ()
{
    A aa;
    aa.setX(3);
    cout << Double(aa);
    return 0;
}