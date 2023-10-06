#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> stack1;
    stack<int> stack2;

    stack1.push(1);
    stack1.push(2);
    stack1.push(3);

    stack2.push(4);
    stack2.push(5);
    stack2.push(6);

    cout << "Before swap:" << endl;
    cout << "Stack 1: ";
    while (!stack1.empty())
    {
        cout << stack1.top() << " ";
        stack1.pop();
    }
    cout << endl;

    cout << "Stack 2: ";
    while (!stack2.empty())
    {
        cout << stack2.top() << " ";
        stack2.pop();
    }
    cout << endl;

    // 원래의 스택에 요소를 복원합니다.

    stack1.push(3);
    stack1.push(2);
    stack1.push(1);
    
    stack2.push(6);
    stack2.push(5);
    stack2.push(4);

    cout << "After swap:" << endl;
    cout << "Stack 1: ";
    while (!stack1.empty())
    {
        cout << stack1.top() << " ";
        stack1.pop();
    }
    cout << endl;

    cout << "Stack 2: ";
    while (!stack2.empty())
    {
        cout << stack2.top() << " ";
        stack2.pop();
    }
    cout << endl;

    return 0;
}
