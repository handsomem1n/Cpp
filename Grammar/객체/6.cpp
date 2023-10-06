// 정적 멤버 변수 static member variable
/*

*/


#include <iostream>

using namespace std;

class Car
{
    string color;
    int serial;

public:
    int speed;
    static int numberofCars; // static member variable

    Car(int s = 0, string c = "white") : speed(s), color(c)
    {
        serial = ++numberofCars;
    }
        void show()
        {
            cout << this << " / " << "serial : " << serial << ", ";
            cout << "speed : " << speed << ", " << "color : " << color << endl;
        }
};

int Car::numberofCars = 0; // static member variable의 초기화는 class 외부에서 해야 함.

int main()
{
    Car carArray[2] = {
        Car(100, "red"), Car(50, "blue")};
    for (int i = 0; i < 2; i++)
    {
        carArray[i].show();
    }
    cout << "sizeof (Car) = " << sizeof(Car) << endl;

    Car *ptr = new Car[3]; // Car *ptr; ptr=new Car[3] - 동적 배열 할당하였기에, not same as above Car carArray[];
    // ptr->show(); // = (*ptr).show();
    (*ptr).show(); // = ptr->show();
    (ptr + 1)->show();
    *ptr = carArray[0];
    ptr->show();
}