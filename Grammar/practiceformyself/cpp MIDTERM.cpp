#include <iostream>
using namespace std;

int f1()
{
    static int v = 1; // 지역변순데 정적할당
    v = v+1;
    return v;
}

static int v = 10000; // 전역인 상태에서 스태틱은 한정자다. 이 파일 안에서만 사용가능하게
int i;

int main(void) {
    int s = 0;
    for (int i=0; i<3; i++){
        s= s+f1();
    }
    cout << s << " " << i << " " << v << endl;
}


// 정적할당, 스코프, 동적할당 다배운거임
