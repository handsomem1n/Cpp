// this는 현재 코드를 실행하는 객체를 가리키는 포인터(&)

#include <iostream>
using namespace std;

class A{
    int p; // A라는 클래스는 int형 멤버 변수 p를 가지고 있다.

    public :
    A(int v = 0){ // A 클래스의 생성자 A(int v = 0)를 정의. 이 생성자는 매개변수로 int형 값을 받으며, 기본값은 0
        cout << this << " : A(int) called \n"; 
        p = v;
    }

    ~A() { // 소멸자가 호출될 때, this 포인터를 출력
        cout << this << ": ~A() called\n";
    }

    int getX() { // 이 함수는 멤버 변수 p의 값을 반환
        return p;
    }

    void setX(int v) { // 이 함수는 매개변수로 전달된 값을 사용하여 멤버 변수 p의 값을 설정합니다. 만약 전달된 값이 0보다 작으면 p의 값을 0으로 설정
        p = (v<0) ? 0 : v;
    }
};

A a2(2); // 전역 변수 a2를 선언하고, 이를 A 클래스의 객체로 초기화

int main() {
    A a1; // A 클래스의 객체 a1을 선언. 이 객체는 기본 생성자를 호출하여 초기화
    cout << "a1 : " << a1.getX() << endl;
    cout << "a2 : " << a2.getX() << endl;

    return 0;
}
