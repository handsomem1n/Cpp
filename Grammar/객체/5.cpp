// 객체에 연산자
#include <iostream>

using namespace std;

class Car
{
    string color;

public:
    int speed;
    Car(int s = 0, string c = "white") : speed(s), color(c) {}
    void show()
    {
        cout << this << " / " << speed << ", " << color << endl;
    }
};

int main()
{
    Car carArray[2] = {
        Car(100, "red"), Car(50, "blue")};
    for (int i = 0; i < 2; i++)
    {
        carArray[i].show();
    }
    cout << "sizeof(Car) = " << sizeof(Car) << endl; // Car 객체의 크기를 출력

    Car *ptr = new Car[3]; // 새로운 Car 객체의 배열을 동적으로 생성하고, 이 배열의 주소를 ptr 포인터에 저장합니다. - 동적 배열 할당하였기에, not same as above Car carArray[];
    ptr->show(); // ptr->show(); : 첫 번째 Car 객체에 대해 show() 함수를 호출합니다. 이 시점에서 객체는 초기화되지 않았으므로, speed는 정해지지 않았고, color는 기본 값인 "white"입니다.
    // ptr->show() = *ptr.show();

    (ptr + 1)->show(); // 포인터에 정수를 더하면, 그 포인터가 가리키는 주소를 그 정수만큼 '이동'시킵니다. 이 이동의 단위는 해당 포인터가 가리키는 데이터 타입의 크기입니다. 예를 들어, int *p라는 포인터가 있고 p가 주소 1000을 가리키고 있다고 가정합시다. int의 크기가 4바이트라면, p + 1은 주소 1004를 가리키게 됩니다. p + 2는 주소 1008을 가리키게 됩니다. 이런 식으로, p + n은 p가 가리키는 주소에서 n개의 int 크기만큼 떨어진 위치를 가리키게 됩니다.
    *ptr = carArray[0]; // carArray의 첫 번째 요소를 복사하여 첫 번째 동적으로 할당된 Car 객체(ptr가 가리키는 객체)에 붙여넣습니다.
    ptr->show();
}