#include <iostream>
using namespace std;

class A {
    int p; // 멤버 변수 p
    public : 
    A(int v = 1) { //생성자 A : 클래스의 인스턴스를 생성할때 호출되는 함수
        cout << "A(int) called\n";
        p = v;
    }
    int getX() {
        return p;
    }
    void setX(int v) {
        p = (v<0) ? 0 : v;
    }
};

int main () {
    A a1, a2(10);
    cout << a1.getX() << endl;
    cout << a2.getX() << endl;
    return 0;
}

/*
이 C++ 코드에서 함수들의 호출 순서를 설명하겠습니다:

프로그램이 실행되면, main() 함수가 먼저 호출됩니다.
main() 함수 내에서 A a1 인스턴스를 생성합니다. 이때 A 클래스의 생성자 A(int v = 1)가 호출되며, 기본값 1이 매개변수 v로 전달됩니다. 생성자에서 "A(int) called" 메시지를 출력하고, 멤버 변수 p에 매개변수 v의 값 1을 할당합니다.
main() 함수 내에서 A a2(10) 인스턴스를 생성합니다. 이때 A 클래스의 생성자 A(int v = 1)가 호출되며, 매개변수 v로 10이 전달됩니다. 생성자에서 "A(int) called" 메시지를 출력하고, 멤버 변수 p에 매개변수 v의 값 10을 할당합니다.
main() 함수 내에서 a1.getX()를 호출하여 a1 인스턴스의 멤버 변수 p의 값을 가져옵니다. 이 경우 값은 1입니다. 가져온 값 1을 출력합니다.
main() 함수 내에서 a2.getX()를 호출하여 a2 인스턴스의 멤버 변수 p의 값을 가져옵니다. 이 경우 값은 10입니다. 가져온 값 10을 출력합니다.
main() 함수가 종료되고 프로그램이 종료됩니다.
*/
