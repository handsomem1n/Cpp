#include <iostream>

using namespace std;

class Car {
    int speed;
    string color = "red"; // 객체를 생성할 때 color 매개변수를 생략하면 기본값으로 "red"를 사용할 수 있도록 하기 위해 이렇게 설정할 수 있다. 즉, 객체를 생성할 때 Car redCar(100)과 같이 color 매개변수를 생략하면 자동으로 "red"가 사용됨.
    
    public:
    Car (int s=0, string c="white") : speed(s), color(c) {}
    /*
    Car(int s, string c)는 매개변수에 기본값을 설정하지 않았으므로, 해당 매개변수를 생략하고 객체를 생성할 수 없음. 반드시 매개변수에 값을 전달해야 함.
    Car (int s=0, string c = "white")에서는 매개변수 s와 c에 기본값을 설정
    */ 

    void show () {
        cout << "주소 : " << this << "speed : "<< speed << ", " << "color : " << color << endl;
    }
};

void swapObj(Car c1, Car c2){
    Car temp;
    temp = c1;
    c1 = c2;
    c2 = temp;
}

int main () {
    Car redCar(100, "red"); // blueCar 생성자도 쉼표로 연결하여 생성 ㄱㄴ
    Car blueCar(50, "blue");

    redCar.show();
    blueCar.show();

    swapObj(redCar, blueCar);

    redCar.show();
    blueCar.show();

    return 0;
}