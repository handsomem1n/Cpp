#include <iostream>

using namespace std;

template <class T>
class Swap
{
public:
    void operator()(T &a, T &b);
    // void doIt(T& a, T& b);
};

template <class T>
void Swap<T>::operator()(T &a, T &b)
{
    if (&a == &b)
    {
        throw exception();
    }
    T tmp;
    tmp = a;
    a = b;
    b = tmp;
}

int main()
{
    Swap<int> a;
    int i = 1, j = 2;
    cout << i << " / " << j << endl;
try
{
    a(i, j);
}
catch (...)
{
    cout << "swapping identical vartables" << endl;
}
cout << i << " / " << j << endl;
}