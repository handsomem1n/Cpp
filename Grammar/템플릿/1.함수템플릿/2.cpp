// 함수 템플릿과 함수중복(overloading)
#include <iostream>

using namespace std;

template <class T> //  함수 템플릿 Def, 함수 템플릿은 함수의 일반적인 형태를 나타내며, 이는 다양한 데이터 타입에 대해서 동작할 수 있습니다.
void increase(T &v) { v += 1; }

template <> // 함수 템플릿 specialization, 기본 템플릿보다 특정 타입 (int* 타입)에 대해 선호됩니다. 
void increase(int *&v) { v += 2; }

// function overloading
void increase(int *&v) { v += 3; } // 함수 오버로딩을 통해 increase 함수의 또 다른 버전을 정의합니다. 이 버전은 int* 자료형에 대해 동작하며, v의 값을 3 증가시킵니다. 이 버전은 함수 템플릿 특수화보다 우선적으로 호출됩니다.

int main()
{
    int i = 1;
    cout << "i = " << i << endl;
    cout<< "&i = " << &i << endl;
    increase(i); // i는 int type이기에 기본 템플릿이 호출됨.
    cout << "i = " << i << endl;

    int *p = &i; // p는 i 변수의 주소를 가리킴
    cout << "p = " << p << endl;
    increase(p); // int* type이기에 over loading된 함수가 호출됨. 
    cout << "p = " << p << endl;
}
