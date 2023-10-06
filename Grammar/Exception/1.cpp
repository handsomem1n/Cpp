// Exception 클래스
#include <iostream>

using namespace std;

class ZeroException
{
};
class NegativeException
{
public:
    int v;
    NegativeException(int v) : v(v) {}
};

int main()
{
    int v;

    try
    {
        cout << " enter a value : ";
        cin >> v;

        if (v < 0)
        {
            throw NegativeException(v);
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
    catch (NegativeException &e)
    {
        cout << "Negative Value : " << e.v << endl;
    }
    cout << "your input : " << v << endl;

    return 0;
}