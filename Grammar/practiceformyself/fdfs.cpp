#include <iostream>
using namespace std;
intf(int a = -1, int b = -2){ // int b 에서 -2라고 초기화안하면 컴파일에러 // 왜일까?
    return a+b;
}
int main(void) {
    cout << f(10) << endl;
    return 0;
}


// 기본값은 뒤에서 앞으로 채운다