// 예외 클래스 상속

#include <iostream>

using namespace std;

class NonPositiveException {
    public :
    int v;
    NonPositiveException(int v = 0) : v(v) {}
};

class ZeroException : public NonPositiveException{};

int main()
{
    int v;
    
    try
    {
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
    }
    catch (ZeroException &e)
    {
        cout << "Zero" << endl;
    }
    catch (NonPositiveException &e)
    {
        cout << "NonPositiveException Value : " << e.v << endl;
    }
    cout << "your input : " << v << endl;

    return 0;
}