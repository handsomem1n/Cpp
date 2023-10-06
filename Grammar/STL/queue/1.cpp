// queue는 선입선출

#include <iostream>
#include <queue>

using namespace std;

#define N 10

int main()
{
    int i;
    queue<int> qu;
    
    for (i = 0; i < N; i++) // 0123456789
    {
        qu.push(i);
    }
    
    while (!qu.empty()) // 맨 앞의 요소 출력
    {
        cout << qu.front() << " ";
        qu.pop(); // 먼저 들어온 것 삭제
    }

    cout << endl;

    return 0;
}