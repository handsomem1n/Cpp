#include < iostream>
using namespace std;

void swap(int x, int y)
{
    int tmp;
    tmp = x;
    x = y;
    y = tmp;
    cout << "x=" << x << "y=" << y << endl;
}

void swap(int x, int y);

int main()
{
    int a = 10, b = 20;
    swap(a, b);
    cout << "a=" << a << "b=" << b << endl;
}