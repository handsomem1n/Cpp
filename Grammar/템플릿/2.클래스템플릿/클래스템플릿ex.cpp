#include <iostream>

// 클래스 템플릿 정의
template <typename T> // <typename T>은 템플릿 매개변수로서 임의의 타입을 의미
class Stack           // Stack이라는 이름의 클래스 템플릿을 선언
{
private:
    // data, top, capacity는 스택 구현을 위한 멤버 변수
    T *data;      // 동적 배열
    int top;      // 스택의 상단 위치
    int capacity; // 스택의 용량

public:
    Stack(int size) // 스택 클래스의 생성자를 정의, size를 매개변수로 받아옴.
    {
        data = new T[size]; // size를 매개변수로 받아서 동적으로 크기가 size인 배열 data를 할당
        capacity = size;
        top = -1; // -1은 스택의 초기 상태를 나타내기 위해 사용되는 값입니다. top을 -1로 초기화하는 이유는 C++의 배열 인덱스가 0부터 시작하기 때문
    }

    ~Stack() // 스택 클래스의 소멸자를 정의합니다. 동적으로 할당한 배열 data를 해제
    {
        delete[] data;
    }

    void push(T element) // push 함수를 정의합니다. element를 매개변수로 받아서 스택에 값을 추가합니다.
    {
        if (top == capacity -1) // 스택이 가득 찬 경우 오류 메시지를 출력
        {
            std::cout << "Stack is full. Cannot push element." << std::endl;
        }
        else
        {
            data[++top] = element;
        }
    }

    T pop() // pop 함수를 정의합니다. 스택에서 값을 제거하고 반환합니다. 템플릿 매개변수 T의 기본 생성자를 호출하여 기본 값을 반환
    {
        if (top == -1) // top이 -1과 같다면 스택이 비어있는 상태이므로 오류 메시지를 출력한 후, 템플릿 매개변수 T의 기본 생성자를 호출하여 기본 값을 반환합니다. 
        {
            std::cout << "Stack is empty. Cannot pop element." << std::endl;
            return T(); // 기본 생성자 호출하여 기본 값을 반환
        }
        else // 그렇지 않으면 data[top--]을 반환하고 top을 감소
        {
            return data[top--];
        }
    }
};

int main()
{
    Stack<int> intStack(5); // main 함수에서 Stack<int>으로 int 자료형에 대한 스택 객체 intStack을 생성합니다.
    // push 함수를 호출하여 값을 추가
    intStack.push(10); // intStack 객체의 push 함수를 호출하여 값 10을 스택에 추가
    intStack.push(20); // intStack 객체의 push 함수를 호출하여 값 20을 스택에 추가
    intStack.push(30); // intStack 객체의 push 함수를 호출하여 값 30을 스택에 추가
    // pop 함수를 호출하여 값을 제거하고 출력
    std::cout << "Popped element: " << intStack.pop() << std::endl;

    return 0;
}
