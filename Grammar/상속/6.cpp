// 자식 클래스의 멤버 함수에서 부모 클래스의 멤버 함수 호출

#include <iostream>

using namespace std;

class Car
{
public:
    int speed;
    Car() : speed(0) {}
    int getHP() { return 100; }
    void print()
    {
        cout << "Car" << endl;
    }
};
class SportsCar : public Car
{
public:
    int speed;
    SportsCar() : speed(1) {}
    int getHP() { return 300; }
    void print()
    {
        Car::print(); // 부모 클래스의 함수 호출하게됨.
        cout << "SportsCar" << endl;
    }
};

int main()
{
    SportsCar c;
    c.print();
}