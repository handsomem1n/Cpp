// const member variable
/*
const int c; : 이 멤버 변수는 const 한정자를 가지고 있으며, 정수형 상수입니다. c는 객체가 생성될 때 초기화되어야 합니다. 생성자의 초기화 목록을 사용하여 초기화할 수 있습니다. 예를 들어, A(int n = 0) : c(n) {}와 같이 정의되어 있습니다. c는 객체가 생성된 이후에는 수정할 수 없습니다. 따라서 show() 함수에서는 c의 값을 출력하는 용도로 사용됩니다.

const int hundred = 100;: 이 멤버 변수는 const 한정자를 가지고 있으며, 정수형 상수입니다. hundred는 객체가 생성될 때 100으로 초기화됩니다. 이 변수는 객체 생성 이후에도 수정할 수 없습니다. show() 함수에서 hundred의 값을 출력하는 용도로 사용됩니다.

상수 멤버 변수는 객체가 생성되면 초기화되고 이후에는 수정할 수 없는 값입니다. 이를 통해 클래스 내부에서 값을 보호하고, 객체의 불변성을 유지할 수 있습니다. 상수 멤버 변수는 주로 객체의 속성이나 특정한 값을 나타내는 데 사용됩니다.
*/

#include <iostream>

using namespace std;

class A
{
    const int c; // const member variable
    const int hundred = 100; // const member variable

public:
    A(int n = 0) : c(n) {}
    void show()
    {
        cout << this << " / " << c << " , ";
        cout << hundred << endl;
    }
};

int main()
{
    A arr[2] = {A(1), A(2)};
    for (int i = 0; i < 2; i++)
    {
        arr[i].show();
    }

    A *ptr = new A[3];
    for(int i = 0; i < 3; i++)
    {
        (ptr + i)->show(); // = (*(ptr +i)).show();
    }
}