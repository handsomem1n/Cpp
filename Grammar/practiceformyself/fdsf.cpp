#include < iostream>
using namespace std;
int f(int param = 0){ // reference타입이었다면 에러였는데, 지금은 에러가 아님
    param = param=1;
    return param;
}
int main(void) {
    const int one = 1;
    int r;
    r = f(one);
    one = 2;
    cout << r;
}

// 값을 복사해서 쓰기때문에 에러아님. 이거 반드시 잘 알기