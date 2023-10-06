#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1(3); // 크기가 3인 배열 생성

    cout << " v1.size() = " << v1.size() << endl;         // v1의 크기를 출력합니다. v1은 3개의 요소를 가지므로 크기는 3입니다.
    cout << " v1.max_size() = " << v1.max_size() << endl; //  v1이 가질 수 있는 최대 크기를 출력합니다. 벡터의 최대 크기는 구현에 따라 다를 수 있지만, 일반적으로 매우 큰 값을 가집니다.
    cout << " v1.empty() = " << v1.empty() << endl;       // v1이 비어 있는지 여부를 출력합니다. 현재 v1에는 요소가 있으므로 비어 있지 않음을 나타내는 0을 출력합니다.
    cout << " v1.capacity() = " << v1.capacity() << endl; // v1의 용량을 출력합니다. 용량은 현재 할당된 요소의 공간을 나타냅니다. 현재 v1은 크기가 3이므로 최소한 3개의 요소를 저장할 수 있는 용량을 가지고 있을 것입니다.
    cout << " v1[0] = " << v1[0] << endl; // v1의 첫 번째 요소에 접근하여 값을 출력합니다. 현재 v1의 첫 번째 요소는 0으로 초기화되었으므로 0을 출력합니다.
}