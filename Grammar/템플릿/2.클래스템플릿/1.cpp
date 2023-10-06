#include <iostream>

using namespace std;

template <class T>
class Box // Box 라는 이름의 클래스 템플릿 정의
{
    T data; // T data;는 템플릿 클래스 Box의 멤버 변수 data를 선언하는 코드입니다. 여기서 T는 템플릿 매개변수로서, Box 클래스의 인스턴스화 시에 실제 데이터 타입으로 대체됩니다. 즉, T는 사용자가 Box 객체를 생성할 때 제공한 데이터 타입으로 치환됩니다.

public:
    Box() {}                            // Box 클래스에는 기본 생성자 Box()가 있습니다.
    void set(T value) { data = value; } // set 함수는 T 타입의 값을 받아 data에 할당하는 역할을 합니다.
    T get() { return data; }            // get 함수는 data의 값을 반환합니다.
};

int main()
{
    Box<int> b1;              // Box<int> b1;은 int 타입을 저장하는 Box 클래스의 객체 b1을 선언합니다.
    b1.set(100);              // b1.set(100);은 b1에 100을 set합니다.
    cout << b1.get() << endl; // b1의 값을 출력

    Box<double> b2;           // double 타입을 저장하는 Box 클래스의 객체 b2를 선언합니다.
    b2.set(3.14);             // b2에 3.14를 설정합니다.
    cout << b2.get() << endl; // b2의 값을 출력합니다.

    return 0;
}