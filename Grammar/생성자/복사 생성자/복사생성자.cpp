#include <iostream>
using namespace std;

class MyClass {
    int x;

public:
    MyClass(int a) : x(a) {
        cout << "Parametrized constructor called" << endl;
    }

    // 복사 생성자 정의
    MyClass(const MyClass& other) : x(other.x) {
        cout << "Copy constructor called" << endl;
    }

    int getX() const {
        return x;
    }
};

void printObject(MyClass obj) {
    cout << "Object value: " << obj.getX() << endl;
}

int main() {
    MyClass obj1(42);          // Parametrized constructor 호출, MyClass 클래스의 객체인 obj1을 생성하고, 생성자에 매개변수 42를 전달하여 초기화하는 코드
    MyClass obj2(obj1);         // 복사 생성자 호출
    printObject(obj1);          // 복사 생성자 호출 (함수 인자로 객체를 값으로 전달)
    MyClass obj3 = obj1;        // 복사 생성자 호출
    MyClass obj4 = MyClass(42); // 복사 생성자 호출 (임시 객체를 obj4에 복사)
    
    return 0;
}


/*
프로그램 실행이 시작되고 main() 함수가 호출됩니다.
MyClass obj1(42); 라인에서 파라미터화된 생성자가 호출됩니다. obj1의 x 멤버 변수에 값 42가 할당되고 "Parametrized constructor called" 메시지가 출력됩니다.
MyClass obj2(obj1); 라인에서 복사 생성자가 호출됩니다. obj1의 x 값이 obj2의 x 값으로 복사되고 "Copy constructor called" 메시지가 출력됩니다.
printObject(obj1); 라인에서 obj1이 값으로 printObject() 함수에 전달됩니다. 이 때 복사 생성자가 호출되고 "Copy constructor called" 메시지가 출력됩니다. 함수 내에서 "Object value: 42" 메시지가 출력됩니다.
MyClass obj3 = obj1; 라인에서 복사 생성자가 호출됩니다. obj1의 x 값이 obj3의 x 값으로 복사되고 "Copy constructor called" 메시지가 출력됩니다.
MyClass obj4 = MyClass(42); 라인에서 먼저 파라미터화된 생성자가 호출되어 임시 객체가 생성되고 "Parametrized constructor called" 메시지가 출력됩니다. 이후 복사 생성자가 호출되어 임시 객체의 x 값이 obj4의 x 값으로 복사되고 "Copy constructor called" 메시지가 출력됩니다.
main() 함수가 종료되고 프로그램이 종료됩니다.
*/