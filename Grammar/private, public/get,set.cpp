#include <iostream>
using namespace std;

class Test{
    private :
        int aaa = 10;
    
    public : 
        int get() {
            return aaa;
        }
        void set(int b){
        aaa = b;
        }
    protected :
};

int main(){
    Test test;
    cout << test.get() << endl;
    test.set(20);
    cout << test.get() << endl;
    return 0;
}