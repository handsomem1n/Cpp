#include <iostream>
using namespace std;

// 함수 포인터를 매개변수로 받는 함수
void someFunction(int arg, void (*funcPtr)(int))
{
    // 함수 포인터로 전달된 함수 호출
    funcPtr(arg);
}

// 함수 포인터로 전달될 함수
void printNumber(int num)
{
    cout << "Number: " << num << endl;
}

int main()
{
    // 함수 포인터를 이용하여 함수 전달
    someFunction(42, printNumber);

    return 0;
}
