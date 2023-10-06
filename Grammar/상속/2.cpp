// 출력값을 통해 자식클래스 생성 시 부모 클래스 Shape() default constructor가 먼저 실행되는 것을 알 수 있다.
#include <iostream>

using namespace std;

class Shape
{
    int x, y;

public:
    Shape(int x2 = 0, int y2 = 0) : x(x2), y(y2)
    {
        cout << this << " : "
             << "Shape() " << endl;
    }
    ~Shape() {
        cout << this << " : " << "~Shape()" << endl;
    }
    void print()
    {
        cout << "( " << x << ", " << y << " ) ";
    }
};

class Rectangle : public Shape
{
    int width, height;

public:
    Rectangle(int x = 0, int y = 0, int w = 0, int h = 0) // Rectangle의 생성자는 Shape의 디폴트 생성자를 명시적으로 호출하지 않습니다. 대신 Rectangle의 객체가 생성될 때 Shape의 디폴트 생성자가 자동으로 호출되며, 이후 Rectangle의 생성자가 실행됩니다. 그 결과, Shape의 x와 y 멤버 변수는 항상 0으로 초기화됩니다.
    {
        width = w;
        height = h;
        cout << this << " : "
             << "Rectangle()" << endl;
    }
    ~Rectangle()
    {
        cout << this << " : "
             << "~Rectangle()" << endl;
    }
    void print()
    {
        Shape::print();
        cout << " : " << width << " x " << height << endl;
    }
};

int main()
{
    Rectangle r1;
    // r1.print();

    // 학습범위는 아니지만 참고. (생성자 호출법)
    // r2(2,3,4,5).print(); // compile error : 이 부분은 r 객체를 호출하는 문법으로 보이지만, 실제로는 오류입니다. 객체를 호출하는 것은 함수 호출 연산자 ()를 사용하는데, Rectangle 클래스에서는 해당 연산자를 오버로딩하지 않았습니다.
    /* 따라서 다음과 같이 수정해야 한다.
    Rectangle r2(2,3,4,5);
    r2.print();
    */

    return 0;
}