#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> myints;
    cout << "size : " << myints.size() << endl;

    for (int i = 0; i < 5; i++)
    {
        myints.push(i);
    }
    cout << "size : " << myints.size() << endl;

    myints.pop();
    cout << "size : " << myints.size() << endl;

    return 0;
}