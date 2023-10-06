// 객체의포인터가함수의매개변수로전달
#include <iostream>

using namespace std;

class Car
{
    int speed;
    string color = "red";

public:
    Car(int s = 0, string c = "white") : speed(s), color(c) {}

    void show()
    {
        cout << "주소 : " << this << " / "<< "speed : " << speed << ", " << "color : " << color << endl;
    }
};

void swapObjpointer(Car *c1, Car *c2)
{
    Car temp; // Car 클래스의 임시 객체 temp declaring
    temp = *c1; // temp 객체를 선언하고 초기화한 후, 객체 포인터 (c1이 가리키는 객체의 내용)을 temp에 복사
    // (Car temp = *c1;도 가능)

    *c1 = *c2;
    *c2 = temp;
}

int main()
{
    Car redCar(100, "red");
    Car blueCar(50, "blue");
    redCar.show();
    blueCar.show();

    swapObjpointer(&redCar, &blueCar);

    redCar.show();
    blueCar.show();

    return 0;
}