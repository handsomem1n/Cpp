#include <iostream>

using namespace std;

int main()
{
    int x = 5;
    int *ptr = &x; // = ptr은 x의 주소를 가리키는 '포인터'. ptr은 x의 주솟값을 (*로 인하여) '가리킨다.'

    cout << endl;

    cout << "x : " << x << endl;
    // error : cout << "*x : " << *x << endl;
    cout << "&x : " << &x << endl;     // x의 주소 출력
    cout << "*ptr : " << *ptr << endl; // <ptr이 가리키는 주소에 있는 값>을 출력 (!= ptr의 주솟값)
    cout << "ptr : " << ptr << endl;   // ptr의 값 출력. 즉, x의 주솟값 출력
    cout << "&ptr : " << &ptr << endl; // ptr의 주소를 출력
    
    

    *ptr = 10; // 포인터를 통해 x의 값을 변경. *ptr은 <ptr이 가리키는 주소>의 값을 변경.

    cout << "*ptr : " << *ptr << endl; // ptr이 가리키는 주소의 값을 출력
    cout << "ptr : " << ptr << endl;   // ptr의 값을 출력
    cout << "&ptr : " << &ptr << endl; // ptr의 주소를 출력

    cout << "x : " << x << endl;
    cout << "&x :" << &x << endl;
    cout << endl;
    // error : cout << "*x : " << *x << endl;

    int y = 5;
    int &ref = y; // ref는 y에 대한 참조(참조는 변수에 대한 별칭(alias)을 만드는 것을 의미). 즉, ref는 y의 또 다른 이름이며, y와 같은 메모리 위치를 참조
                  // 참조 변수를 선언할 때 사용하는 & 기호는 주소 연산자가 아니라 참조 연산자로 사용됩니다. int &ref = y;라고 선언하면, ref는 y에 대한 참조를 가지게 됩니다. 이제 ref를 통해 y를 다룰 수 있으며, ref를 통해 y의 값을 읽거나 변경할 수 있습니다.
                  // 둘은 <같은 메모리 공간을 공유>하기 때문에 y를 변경하면 ref이 변경되고, ref를 변경하면 y가 변경됨.

    cout << "y : " << y << endl;
    cout << "&y : " << &y << endl; // y의 주소를 출력
    // error : cout << *y << endl;
    cout << "ref : " << ref << endl;   // ref가 참조하는 y의 값을 출력
    cout << "&ref : " << &ref << endl; // ref의 주소를 출력
    // error : cout << "*ref : " << *ref << endl;

    ref = ref + 1;
    cout << "y : " << y << endl;
    cout << "ref : " << ref << endl;
    cout << "&ref : " << &ref << endl; // 주솟값은 그대로

    cout << endl;

    int t = 10;
    /*
    error1 :
        int ref2;
        &ref2 = &t;
    error2 :
        int &ref2 = &t;
    */
    int *ref2 = &t; // <t의 주소>를 가리키는 포인터 ref2를 선언
    cout << "int *ref2 = &t;" << endl;
    cout << "t : " << t << endl;
    cout << "&t : " << &t << endl; // t의 주솟값 출력
    // error : cout << "*t : " << *t << endl;

    cout << "ref2 : " << ref2 << endl;     // ref2가 참조하는 y의 값을 출력
    cout << "&ref2 : " << &ref2 << endl; // ref2의 주소값 출력
    cout << "*ref2 : " << *ref2 << endl; // ref2가 가리키는 주소에 있는 값을 출력

    cout << endl;

    // int &k;
    // cout << k << endl;
    // cout << &k << endl;
    
}
