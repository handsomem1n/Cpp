#include <iostream>

using namespace std;

class Car
{
    string color;

public:
    int speed;
    Car(int s = 0, string c = "white") : speed(s), color(c) {}

    void display()
    {
        cout << "주솟값 : " << this << " / " << speed << ", " << color << endl;
    }
};

int main()
{
    Car carArray[2] = {
        Car(100, "red"), Car(50, "blue")};
    for (int i = 0; i < 2; i++)
    {
        carArray[i].display();
    }
    return 0;
}