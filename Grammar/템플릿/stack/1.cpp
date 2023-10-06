#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> mystack;

    for (int i = 0; i < 5; ++i)
    {
        mystack.push(i);
    }
    cout << " popping out elements... ";

    while (!mystack.empty()) // mystack이 비어있지 않은 동안 반복
    {
        cout << ' ' << mystack.top(); // mystack.top() 함수를 사용하여 스택의 가장 위에 있는 요소를 반환
        mystack.pop(); // mystack.pop() 함수를 호출하여 스택의 가장 위에 있는 요소를 제거
    }
    cout << endl;
}