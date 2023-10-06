#include <iostream>

using namespace std;

class Test {
    private :
    int aaa = 10;
    public :
    
    // 해결책 : 
    int get() { 
        return aaa;
    }
    
    int bbb = 20;

    protected:
};

int main() {
    Test test;
    // cout << test.aaa << endl; // 객체가 클래스 안에서 private으로 감싸져 있기에 외부에서 접근 불가능.
    // 해결책 : 
    cout << test.get() << endl; // get함수를 통하여 불러옴
    cout << test.bbb << endl;
    return 0;
}