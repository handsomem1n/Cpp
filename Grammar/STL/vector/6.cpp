#include <iostream>
#include <vector>
#include <string>

using namespace std;

#define N 3

template <class T>
void print_vector(vector<T> v, string s = "") // 템플릿으로 정의된 함수로, vector<T>를 인자로 받아 벡터의 내용을 출력하는 함수입니다. 두 번째 매개변수 s는 출력 전에 출력할 문자열을 지정하는 선택적 매개변수입니다.
{
    cout << s;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v1(N, 5); // v1(N, value): 크기가 N이고, 모든 요소가 value로 초기화된 벡터

    v1.resize(6);
    cout << "v1.size() = " << v1.size() << endl;         
    cout << "v1.capacity() = " << v1.capacity() << endl; 
    
    v1[0] = 1;
    v1[1] = 2;
    v1[4] = 3;
    print_vector(v1, "v1 = ");
    
    v1.clear(); // v1 벡터를 비웁니다. <모든 요소>가 제거됩니다. 데이터를 삭제하되, <메모리 할당을 없애는 것은 아니다.> 따라서 size는 0이지만, capacity는 still 6

    print_vector(v1, "v1 = ");
    cout << "v1.size() = " << v1.size() << endl;
    cout << "v1.capacity() = " << v1.capacity() << endl;
}

// 메서드는 요소를 제거하기만 하고, 요소에 할당된 메모리는 해제하지 않습니다. 이로 인해 다음에 요소를 추가할 때 재사용됩니다. 이는 메모리 할당과 해제를 반복적으로 수행하는 비용을 줄여줍니다.