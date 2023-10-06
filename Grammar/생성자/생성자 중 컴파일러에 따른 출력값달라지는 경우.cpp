#include <iostream>
using namespace std;

class A{
    int p; // 클래스의 정수형 변수로, 인스턴스의 값을 저장합니다. 생성자가 정의되어 있지 않기 때문에 초기화가 되지 않습니다. 따라서 초기값은 미정이며, 컴파일러에 따라 다를 수 있습니다.
    public :

    // A() {
    //     cout << "A() called\n";
    //     p = 1;
    // }
    // A(int v = 0){
    //     cout << "A(int) called\n";
    //     p = v;
    // }

    //위의 주석으로 인하여 default constructor A::A(){}가 자동으로 생성됨.
    int getX() { // 멤버 function
        return p;
    }
    void setX(int v) { // 멤버 function
        p = (v<0) ? 0 : v;
    }
};

A a2; // a2는 클래스A의 인스턴스 변수, A클래스의 인스턴스 a2를 global 변수로 선언한 것임
int main() {
    A a1;
    cout << a1.getX() << endl;
    cout << a2.getX() << endl;
    return 0;
}

/*
프로그램이 실행되면, 전역 변수 A a2;가 초기화됩니다. 이때 A 클래스의 인스턴스 a2가 생성되고, 멤버 변수 p는 초기화되지 않습니다.
전역 변수 초기화 이후, main() 함수가 호출됩니다.
main() 함수 내에서 A a1; 인스턴스를 생성합니다. 이때 A 클래스의 인스턴스 a1이 생성되고, 멤버 변수 p는 초기화되지 않습니다.
main() 함수 내에서 a1.getX()를 호출하여 a1 인스턴스의 멤버 변수 p의 값을 가져옵니다. 이 값은 초기화되지 않았기 때문에 미정입니다. 가져온 값을 출력합니다.
main() 함수 내에서 a2.getX()를 호출하여 전역 변수 a2 인스턴스의 멤버 변수 p의 값을 가져옵니다. 이 값은 초기화되지 않았기 때문에 미정입니다. 가져온 값을 출력합니다.
main() 함수가 종료되고 프로그램이 종료됩니다.
*/