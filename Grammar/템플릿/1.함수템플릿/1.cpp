// 템플릿 함수의 특수화

#include <iostream>

using namespace std;

template <class T>
void increase(T &v) { v += 1; } // increase라는 이름의 함수 템플릿을 정의 / T라는 템플릿 매개변수를 가지며, v라는 참조 매개변수를 통해 값을 전달받습니다. v의 값을 1 증가시킵니다.

template <> // increase 함수 템플릿의 특수화 버전을 정의합니다.
void increase(int *&v)
{
    v += 2;
} // 이 특수화 버전은 int* 자료형에 대해 동작하며, v의 값을 2 증가시킵니다.
  // 핵심) int* 자료형에 대한 특수화를 사용하는 이유는 포인터의 증가 연산이 일반 변수와 다르기 때문입니다.

int main()
{
    int i = 1;
    cout << "i = " << i << endl;
    cout << "&i = " << &i << endl;
    increase(i);
    cout << "&i = " << &i << endl;
    cout << "i = " << i << endl;

    int *p = &i;
    cout << "p = " << p << endl;
    increase(p); // p는 int* 자료형이므로, increase 함수의 특수화 버전이 호출됩니다.
    cout << "p = " << p << endl;
}

/*
increase(p)는 주소값에 2를 더하는 것이 아니라, 주소값을 2만큼 증가시키는 작업을 수행합니다. 포인터 증가 연산은 포인터가 가리키는 자료형의 크기에 따라 주소값을 조정합니다.

따라서, increase(p)를 호출한 후에 p가 가리키는 주소값은 기존 주소값에서 sizeof(int) 바이트 크기만큼 증가한 새로운 주소값이 됩니다. sizeof(int)는 일반적으로 4바이트입니다.

정리하자면, increase(p)를 호출한 후 p가 가리키는 주소값은 기존 주소에서 sizeof(int) 바이트 크기만큼 증가한 새로운 주소값이 됩니다.
*/
