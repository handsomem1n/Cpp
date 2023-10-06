#include <iostream>
#include <vector>
using namespace std;
#define N 3 

int main()
{
    vector<int> v1(N, 5); 

    v1.resize(6); // 벡터의 크기를 6으로 변경합니다. 크기가 증가하면서 추가된 요소는 기본값으로 초기화됩니다.
    cout << " v1.size() = " << v1.size() << endl;         
    cout << " v1.max_size() = " << v1.max_size() << endl; 
    cout << " v1.empty() = " << v1.empty() << endl;       
    cout << " v1.capacity() = " << v1.capacity() << endl; 
    v1[0] = 1; 
    v1[1] = 2; 
    v1[4] = 3; 
    cout << " v1 = " ;
        for ( int i = 0; i<6; i++){
            cout << v1[i] << " ";
        }
    cout << endl;
}
