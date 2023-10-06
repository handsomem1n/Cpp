/* C++의 std::find 함수는 <algorithm> 헤더에 정의되어 있으며, 주어진 범위에서 특정한 값을 검색하는 데 사용됩니다.
아래는 std::find 함수의 형식과 사용 방법입니다.

template< class hsm, class T >
hsm find( hsm first, hsm last, const T& value );
    first: 검색할 범위의 시작 위치를 가리키는 반복자
    last: 검색할 범위의 끝 위치를 가리키는 반복자
    value: 찾고자 하는 값
std::find 함수는 first와 last로 지정된 범위에서 value를 찾아, 해당 값이 있는 위치를 가리키는 반복자를 반환합니다. 만약 해당 값을 찾지 못하면, last를 반환합니다.

예를 들어, 다음과 같이 사용할 수 있습니다.
*/
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    vector<int> v { 1, 2, 3, 4, 5 };

    auto it = find(v.begin(), v.end(), 3);
    if (it != v.end())
        cout << "Found value " << *it << " at position " << distance(v.begin(), it) << endl;
    else
        cout << "Value not found" << endl;

    return 0;
}
위 예제에서는 vector를 생성하고, find 함수를 사용하여 벡터에서 3을 찾습니다. 만약 해당 값을 찾았다면, 해당 값을 가리키는 반복자와 해당 위치를 출력하고, 찾지 못했다면 "Value not found"를 출력합니다.