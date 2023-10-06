#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1;

    cout << " v1.size() = " << v1.size() << endl; // size() 함수는 공간의 크기가 아닌 실제로 저장된 요소의 개수를 나타냅니다. v1의 크기를 출력합니다. 초기에는 요소가 없으므로 크기는 0
    cout << " v1.max_size() = " <<v1.max_size() << endl; //  v1이 가질 수 있는 최대 크기를 출력합니다. 벡터의 최대 크기는 구현에 따라 다를 수 있지만, 일반적으로 매우 큰 값을 가집니다.
    cout << " v1.empty() = " << v1.empty() << endl; // v1이 비어 있는지 여부를 출력합니다. 현재 v1에는 요소가 없으므로 비어 있음을 나타내는 1을 출력합니다.
    cout << " v1[0] = " << v1[0] << endl; // v1의 첫 번째 요소에 접근하여 값을 출력합니다. 현재 v1은 요소가 없으므로 접근할 수 있는 유효한 요소가 없어 예기치 않은 동작이 발생할 수 있습니다.
    
}