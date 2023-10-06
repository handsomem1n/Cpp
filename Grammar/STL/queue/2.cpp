#include <iostream>
#include <queue>

using namespace std;

#define N 10

int main()
{
    int i;
    queue<int> qu;
    for (i = 0; i < N; i++)
    {
        qu.push(i);
    }
    while (!qu.empty())
    {
        cout << qu.front() << " ";
        qu.pop();
    }
    cout << endl;
}