// virtual method의 필요성을 체감할 수 있는 코드
// 각 for문에서 어떻게 메서드를 호출하는지 비교할 것.
    // 변수가 멤버 함수에 접근하는 방법은 '.'
    // 포인터 변수가 멤버 함수에 접근하는 방법은 '->'

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

int main()
{
    Shape shapeArray[2];

    Rectangle r;
    r.setOrigin(1, 1);
    r.setWidth(3);
    cout << endl;
    cout << endl;

    Circle c;
    c.setOrigin(4, 4);
    c.setRadius(5);

    shapeArray[0] = r; // Shape 배열의 첫 번째 요소에 Rectangle 객체를 대입.
    shapeArray[1] = c; // Shape 배열의 두 번째 요소에 Circle 객체를 대입.

    for (int i = 0; i < 2; i++)
    {
        shapeArray[i].draw(); // 변수가 멤버 함수에 접근하기 위하여 dot 사용
        cout << endl;
    }

    Shape *shapePtrs[2]; // Shape 포인터의 배열을 선언
    shapePtrs[0] = &r; // 첫 번째 요소에는 Rectangle 객체의 주소를 저장.
    shapePtrs[1] = &c; // 두 번째 요소에는 Circle 객체의 주소를 저장.

    for (int i = 0; i < 2; i++) // 배열의 각 요소에 대해 draw 메서드를 호출하고, 각 호출 이후에 개행을 출력합니다. 이 때 각 요소는 Shape 포인터이므로, 실제 객체의 타입에 따라 오버라이드 된 draw 메서드가 호출됩니다. 이것이 바로 'virtual' 키워드가 필요한 이유입니다.
    {
        shapePtrs[i]->draw(); // 포인터 변수가 멤버 함수에 접근하기 위하여 '->' 사용
        cout << endl;
    }
}
