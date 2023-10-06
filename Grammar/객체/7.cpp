// 정적 멤버 함수 static member function
/*
정적 멤버 변수(static member variable):
Car 클래스에서 numberofCars는 정적 멤버 변수입니다.
정적 멤버 변수는 <클래스의 모든 객체들>이 공유하는 변수입니다. 즉, 클래스의 모든 객체가 동일한 정적 멤버 변수를 사용합니다.
정적 멤버 변수는 <클래스 외부에서> 초기화되어야 합니다. 따라서 Car::numberofCars = 0;와 같이 클래스 외부에서 초기화합니다.
static int numberofCars;와 같이 선언할 때 초기화하지 않아도 컴파일러가 자동으로 초기화합니다.

정적 멤버 함수(static member function):
Car 클래스에서 getNumberofCars()는 정적 멤버 함수입니다.
정적 멤버 함수는 <객체의 인스턴스에 속하는 것이 아닌 클래스 자체에 속하는 함수>입니다.
정적 멤버 함수는 정적 멤버 변수와 마찬가지로 <클래스의 모든 객체들이 공유>합니다. 즉, 정적 멤버 함수는 객체의 인스턴스에 종속되지 않습니다.
정적 멤버 함수는 객체를 생성하지 않고도 호출할 수 있습니다. Car::getNumberofCars()와 같이 클래스 이름을 통해 호출할 수 있습니다.
정적 멤버 함수 내에서는 정적 멤버 변수만 접근할 수 있습니다. 즉, this 포인터를 사용하여 객체의 멤버 변수에 접근할 수 없습니다.
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

    static int getNumberofCars() { return numberofCars; } // Car class 내 정적 멤버 함수
        void show()
        {
            cout << this << " / " << "serial : " << serial << ", ";
            cout << "speed : " << speed << ", " << "color : " << color << endl;
        }
};

int Car::numberofCars = 0; // static member variable의 초기화는 class 외부에서 해야 함.

int main()
{
    Car carArray[10];
    for (int i = 0; i < 10; i++)
    {
        carArray[i].show();
    }
    Car *ptr = new Car[30];
    
    cout << "Number of Cars is " << Car::getNumberofCars() << endl;
    cout << "Number of Cars is " << carArray[2].getNumberofCars << endl;
    cout << "Number of Cars is " << carArray[2].getNumberofCars() << endl;
    cout << "Number of Cars is " << ptr->getNumberofCars() << endl;
}