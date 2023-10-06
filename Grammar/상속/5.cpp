#include <iostream>

using namespace std;

class Car
{
public:
    int speed;
    Car() : speed(0) {} // Car() : speed(0) {}는 Car 클래스의 생성자를 정의하는 부분입니다. 이 생성자는 Car 클래스의 멤버 변수인 speed를 0으로 초기화합니다. Car 클래스의 생성자에서 speed를 초기화하는 이유는 Car 클래스의 객체를 생성할 때 speed 값을 기본적으로 0으로 설정하기 위해서입니다.
    int getHP() { return 100; }
};

class SportsCar : public Car
{
public:
    int speed;
    SportsCar() : speed(1) {} // SportsCar 클래스의 생성자를 정의하는 부분입니다. 이 생성자는 speed 멤버 변수를 1로 초기화합니다. SportsCar 클래스는 Car 클래스를 상속받았기 때문에, Car 클래스의 멤버 변수인 speed와는 별개의 멤버 변수입니다.
    int getHP() { return 300; }
};

int main()
{
    SportsCar c;
    cout << "마력 : " << c.getHP() << endl;
    cout << "부모클래스의 마력 : " << c.Car::getHP() << endl;
    cout << "스피드 : " << c.speed << endl;
    cout << "부모클래스의 스피드 : " << c.Car::speed << endl;
    return 0;
}