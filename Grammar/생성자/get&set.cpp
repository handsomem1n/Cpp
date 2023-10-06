/*

MyClass 클래스는 data라는 private 멤버 변수를 가지고 있습니다.
getData()는 data의 값을 반환하는 Getter 메서드이고, setData()는 data의 값을 설정하는 Setter 메서드입니다.
main() 함수에서는 obj 객체를 생성하고, setData()를 호출하여 data 멤버 변수에 값을 설정합니다.
그리고 getData()를 호출하여 data 멤버 변수의 값을 가져와 value 변수에 저장한 후 출력합니다.

*/

#include <iostream>
using namespace std;

class MyClass
{
private:
    int data;

public:
    int getData() const
    {
        return data;
    }

    void setData(int value)
    {
        data = value;
    }
};

int main()
{
    MyClass obj; // MyClass 클래스의 obj이라는 생성자 호출한거임

    obj.setData(42);           // Setter를 사용하여 data 멤버 변수에 값을 설정합니다.
    int value = obj.getData(); // Getter를 사용하여 data 멤버 변수의 값을 가져옵니다.

    cout << "data의 값: " << value << endl;

    return 0;
}


