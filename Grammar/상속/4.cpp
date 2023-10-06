// 멤버 함수 overriding
#include <iostream>

using namespace std;

class Car
{
public:
    int getHP() { return 100; }
};
class SportsCar : public Car
{
public:
    int getHP() { return 300; }
};

int main()
{
    SportsCar c;

    cout << "마력 : " << c.getHP() << endl;
    cout << "마력 : " << c.Car::getHP() << endl;
    return 0;
}