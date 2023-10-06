// upcasting(자식->부모), downcasting(부모->자식)
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
    void draw()
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

void move(Shape &s, int dx, int dy)
{
    s.setOrigin(dx, dy);
}

int main()
{
    cout << "1" << endl;
    Rectangle r;
    r.setOrigin(1, 1);
    r.setWidth(3);
    r.draw();
    cout << endl;
    cout << endl;

    cout << "2" << endl;
    Shape *p_s;
    p_s = &r; // upcasting : Rectangle -> Shape
    p_s->setOrigin(10, 10);
    // p_s->setWidth(100); // compile error
    p_s->draw();
    cout << endl;
    cout << endl;

    cout << "3" << endl;
    Rectangle *p_r; // Rectangle 객체에 대한 포인터 p_r를 선언
    p_r = (Rectangle *)p_s; // downcasting : Shape 타입의 포인터 p_s를 Rectangle 타입의 포인터 p_r로 변환
    p_r->setOrigin(8, 8);
    p_r->setWidth(16);
    p_r->draw();
    cout << endl;
    cout << endl;

    cout << "4" << endl;
    ((Circle *)p_s)->setRadius(11); // 오류는 안나지만 잘못됨 : p_s는 실제로 Rectangle 객체를 가리키고 있지만 Circle 객체로 취급하려고 시도하고 있다.
    ((Circle *)p_s)->draw();
    cout << endl;
    p_r->draw();
    cout << endl;
    cout << endl;

    cout << "5" << endl;
    Shape &s = r; // Shape 객체에 대한 참조 s를 선언하고, Rectangle 객체 r을 할당합니다. 이는 Rectangle을 Shape으로 업캐스팅하는 과정입니다.
    s.setOrigin(5, 5);
    // s.setWidth(7); // compile error
    s.draw();
    cout << endl;

    // Rectangle& r_r = (Rectangle)s; // compile error : Shape -> Rectangle 변환 생성자가 필요함.
}