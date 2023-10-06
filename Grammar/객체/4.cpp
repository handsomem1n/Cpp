// 함수가객체를반환
#include <iostream>
using namespace std;

class Car
{
    int speed;
    string color;

public:
    Car(int s = 0, string c = "white") : speed(s), color(c) {}
    void display()
    {
        cout << this << " / " << speed << ", " << color << endl;
    }
};

Car buyCar(string color)
{
    Car tmp(30, color);
    tmp.display();
    return tmp; // tmp 객체는 buyCar 함수에서 반환되어 myCar에 복사됩니다.
}

int main()
{
    Car myCar;
myCar.display();
myCar = buyCar("green");
myCar.display();
return 0;
}

/*
첫 번째 myCar.display();에서, myCar 객체는 Car 클래스의 기본 생성자에 의해 생성됩니다. 기본 생성자는 speed를 0으로, color를 "white"로 초기화합니다. 따라서 myCar.display()를 호출하면, myCar의 주소와 함께 "0, white"가 출력됩니다.

그 다음에 myCar = buyCar("green");를 호출하면, buyCar 함수는 tmp라는 새로운 Car 객체를 생성하고, 이 객체의 speed는 30으로, color는 "green"으로 초기화합니다. tmp.display()를 호출하면, tmp의 주소와 함께 "30, green"이 출력됩니다. 그 후에 tmp 객체는 buyCar 함수에서 반환되어 myCar에 복사됩니다.

따라서 두 번째 myCar.display();에서는 myCar 객체의 값이 변경되어 있습니다. 이제 myCar의 speed는 30이고, color는 "green"입니다. 따라서 myCar.display()를 호출하면, myCar의 주소와 함께 "30, green"이 출력됩니다.

////////

주의할 점은, buyCar 함수에서 tmp 객체를 생성하면서 출력한 주소와 myCar 객체의 주소가 다를 수 있다는 것입니다. 이는 buyCar 함수에서 tmp 객체를 반환할 때 객체의 내용이 myCar로 복사되기 때문입니다. 이 복사 과정에서 tmp 객체와 myCar 객체는 같은 값을 가지게 되지만, 이들은 서로 다른 메모리 위치에 위치하게 됩니다.
*/