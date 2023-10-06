// 2.cpp와 같이 보기
// virtual method의 필요성을 체감할 수 있는 코드
// 만약 Shape 포인터를 통하여 멤버 함수를 호출하더라도 도형의 종류에 따라서 서로 다른 draw()가 호출된다면 상당히 유용할 것이다.
// 즉 사각형인 경우에는 사각형을 그리는 draw()가 호출되고 원의 경우에는 원을 그리는 draw()가 호출된다면 좋을 거 같다.
// 두 번째 코드에서는 Shape 클래스의 draw 메서드가 가상 메서드입니다. 가상 메서드는 기반 클래스의 포인터나 참조를 통해 호출될 때 동적 바인딩을 사용하므로, 실제 객체의 타입에 따라서 오버라이딩된 메서드가 호출됩니다. 따라서 Shape 타입의 포인터나 참조를 통해 draw를 호출하면 Rectangle 객체에서는 Rectangle의 draw가, Circle 객체에서는 Circle의 draw가 호출됩니다. 이것이 바로 가상 함수의 필요성과 활용 사례입니다.
#include <iostream>

using namespace std;

class Shape
{
protected:
    int x, y;

public:
    void setOrigin(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    virtual void draw()
    {
        cout << "Shape : " << x << " , " << y;
    }
};

class Rectangle : public Shape
{
    int width, height;

public:
    void setWidth(int w) { width = w; }
    void setHeight(int h) { height = h; }
    void draw()
    {
        Shape::draw();
        cout << " Rectangle : " << width << " x " << height;
    }
};

class Circle : public Shape
{
    int radius;

public:
    void setRadius(int r) { radius = r; }
    void draw()
    {
        Shape::draw();
        cout << " Circle : " << radius;
    }
};

int main() {
    Rectangle r;
    r.setOrigin(1, 1);
    r.setWidth(3);
    r.draw();
    cout << endl;

    Circle c;
    c.setOrigin(4, 4);
    c.setRadius(5);
    c.draw();
    cout << endl;

    Shape *p_s;
    p_s = &r; // Rectangle -> Shape
    p_s->draw();
    cout << endl;
    
    p_s = &c; // Circle -> Shape
    p_s->draw();
    cout << endl;

    Shape& s1 = r;
    s1.draw(); // Rectangle을 그리는 method
    cout << endl;

    Shape& s2 = c;
    s2.draw(); // Circle을 그리는 method
    cout << endl;
}
