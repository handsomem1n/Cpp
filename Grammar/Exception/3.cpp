// 함수 호출의 Exception 전달 - 함수가 catch 하지 않는 경우

#include <iostream>

using namespace std;

class NonPositiveException
{
public:
    int v;
    NonPositiveException(int v = 0) : v(v) {}
};

class ZeroException : public NonPositiveException
{
};

void foo()
{
    int v;
    cout << "enter a value : ";
    cin >> v;

    if (v < 0)
    {
        throw NonPositiveException(v);
    }
    if (v == 0)
    {
        throw ZeroException();
    }
    cout << "foo" << endl;
}

int main()
{
    try
    {
        foo();
    }
    catch (ZeroException &e)
    {
        cout << "Zero" << endl;
    }
    catch (NonPositiveException &e)
    {
        cout << "NonPositiveException Value : " << e.v << endl;
    }
    cout << "main" << endl;

    return 0;
}