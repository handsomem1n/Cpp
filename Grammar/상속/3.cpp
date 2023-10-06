// 부모 클래스 생성자의 명시적 호출 -> 자식 클래스 객체가 생성될 때, 부모 클래스인 Shape의 x,y를 특정 값으로 초기화할 수 있는 유연성이 확보됨.
// 2.cpp와의 가장 중요한 차이점은 Rectangle 클래스의 생성자에서 Shape 클래스의 생성자를 호출하는 방식.
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
    Rectangle(int x = 0, int y = 0, int w = 0, int h = 0) : Shape(x, y)
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
    return 0;
}