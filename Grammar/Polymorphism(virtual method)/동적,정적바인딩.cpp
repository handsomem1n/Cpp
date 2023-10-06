#include <iostream>
using namespace std;

class Base {
public:
    virtual void foo() {
        cout << "Base::foo()" << endl;
    }

    void bar() {
        cout << "Base::bar()" << endl;
    }
};

class Derived : public Base {
public:
    void foo() override {
        cout << "Derived::foo()" << endl;
    }

    void bar() {
        cout << "Derived::bar()" << endl;
    }
};

int main() {
    Base* basePtr = new Derived();

    basePtr->foo(); // 동적 바인딩, Derived::foo() 호출
    basePtr->bar(); // 정적 바인딩, Base::bar() 호출

    delete basePtr;

    return 0;
}
