#include <iostream>

using namespace std;

int main()
{
    class MyClass
    {
    public:
        void printMessage()
        {
            cout << "Hello, World!" << endl;
        }
    };

    MyClass object; // Myclass 클래스의 객체를 생성하여 object라는 이름의 MyClass 객체가 만들어짐.
    MyClass *pointer = &object; // pointer라는 이름의 포인터를 선언하고, 이 포인터를 object 객체의 주소로 초기화하는 부분. 즉, pointer는 object 객체를 가리키는 포인터가 됨.

    // 멤버 함수 호출
    pointer->printMessage();
}