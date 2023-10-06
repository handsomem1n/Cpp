#include <iostream>
using namespace std;

// 함수 객체 클래스
class PrintNumber
{
public:
    void operator()(int num)
    {
        cout << "Number: " << num << endl;
    }
};

// 함수 객체를 매개변수로 받는 함수
void someFunction(int arg, PrintNumber funcObj)
{
    // 함수 객체 호출
    funcObj(arg);
}

int main()
{
    // 함수 객체를 이용하여 함수 전달
    PrintNumber printObj;
    someFunction(42, printObj);

    return 0;
}
