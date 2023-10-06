#include <iostream>

using namespace std;

class A
{
    /*(private)*/ int v; // private member variable은 클래스 내부에서만 직접 접근

protected:
    int t;

public:
    int p;
    void f();
};

void A ::f()
{
    v = 1;
    t = 2;
    p = 3;
}

class SubA : public A
{
public:
    void g();
};

void SubA ::g()
{
    // v = 10; compile error : private으로 설정되었기에 재정의 불가
    t = 20;
    p = 30;
}

class Other
{
public:
    void h();
};

void Other ::h() // Other 클래스의 멤버 함수 h()의 정의
{
    A obj1; // 객체 생성
    // obj1.v = 100;
    // obj1.t = 200;
    obj1.p = 300; // public이었기에 접근 가능. obj1.p에 값을 할당
    obj1.f(); // method 호출
    SubA s; // 객체 생성
    s.f();
    s.g();
}
int main()
{
    Other t;
    t.h();
}