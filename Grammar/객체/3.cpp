//객체의래퍼런스가함수의매개변수로전달

#include <iostream>

using namespace std;

class Car
{
    int speed;
    string color;

public:
    Car(int s = 0, string c = "white") : speed(s), color(c) {}

    void show()
    {
        cout << "주소 : " << this << " / "<< "speed : " << speed << ", " << "color : " << color << endl;
    }
};

void swapObjpointer(Car &c1, Car &c2)
{
    Car tmp;
    tmp = c1;
    c1 = c2;
    c2 = tmp;
}

int main()
{
    Car redCar(100, "red");
    Car blueCar(50, "blue");
    redCar.show();
    blueCar.show();

    swapObjpointer(redCar, blueCar);

    redCar.show();
    blueCar.show();

    return 0;
}