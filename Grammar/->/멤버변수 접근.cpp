#include <iostream>

using namespace std;
int main()
{
    struct Point
    {
        int x;
        int y;
    };

    Point point;
    Point *pointer = &point;

    // 멤버 변수 x에 접근
    pointer->x = 10;

    // 멤버 변수 y에 접근
    pointer->y = 20;
}