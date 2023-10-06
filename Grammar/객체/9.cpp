// const member function : 주로 객체의 정보를 출력하거나 객체의 상태를 읽는 데 사용됩니다. const 멤버 함수를 사용하여 객체의 상태를 수정하지 않고 안전하게 정보를 얻을 수 있습니다.

#include <iostream>

using namespace std;

class A{
    const int c;
    const int hundred = 100;

    int v;

    public : 
    A(int n = 0) : c(n) {}
    void show() const { // const로 인하여 -> "show 함수는 멤버 변수의 값을 수정하는 것을 허용하지 않습니다"
        v = 0 ; // error point because of const member function
        cout << this << " / " << c << ", ";
        cout << hundred << endl;
    }
};

/*
show method가 무슨 짓을 하던 간에, 저 함수는 member에 있는 instance 값들을 변경하지 않는다.
따라서, v = 0; 이라고 변경한 것에 대한 Compile error가 발생한다.
즉, const keyword까지도 signiture로 본다.
따라서, 
show() const {} != show() {}
*/ 
