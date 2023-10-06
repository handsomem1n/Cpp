// 두 개의 데이터를 저장하는 클래스 Box2

#include <iostream>

using namespace std;

template <class T1, class T2> class Box2 // Box2라는 이름의 클래스 템플릿을 정의합니다. T1과 T2라는 두 개의 템플릿 매개변수를 가지며,
{
    T1 data1; //  data1과 data2라는 멤버 변수를 포함합니다.
    T2 data2;

public:
    Box2() {} // 생성자
    void set1(T1 value) // set1 함수는 T1 타입의 값을 받아 data1에 할당하는 역할을 합니다.
    {
        data1 = value;
    }
    void set2(T2 value)
    {
        data2 = value;
    }
    T1 get1(); // 클래스 템플릿 Box2의 멤버 함수인 get1의 선언
    T2 get2();
};

// 클래스 외부에 정의한 것.  템플릿 매개변수를 포함하여 정의할 때에는 Box2<T1, T2>:: 접두사를 사용합니다.
template <class T1, class T2>
T1 Box2<T1, T2>::get1() { return data1; } // get1 함수와 get2 함수는 data1과 data2의 값을 반환합니다.
template <class T1, class T2>
T2 Box2<T1, T2>::get2() { return data2; }

int main()
{
    Box2 <int, double> b;
    b.set1(100);
    b.set2(3.14);
    cout << b.get1() << "," << b.get2() << endl;
    return 0;
}
