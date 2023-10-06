#include <iostream>
#include <vector>

using namespace std;

#define N 3 // #define N 3은 전처리기 지시문(preprocessor directive)으로, 코드 상에서 N을 3으로 정의하라는 의미입니다. 이는 컴파일러가 소스 코드를 컴파일하기 전에 전처리기가 해당 부분을 변경하는 역할을 수행합니다.

int main()
{
    vector<int> v1(N, 5); // v1(N, value): 크기가 N이고, 모든 요소가 value로 초기화된 벡터 -> vector<int> v1(N, 5);을 사용하여 크기가 N이고 모든 요소가 5로 초기화된 벡터를 생성

    cout << " v1.size() = " << v1.size() << endl;         // v1의 크기를 출력합니다.
    cout << " v1.max_size() = " << v1.max_size() << endl; //  v1이 가질 수 있는 최대 크기를 출력합니다. 벡터의 최대 크기는 구현에 따라 다를 수 있지만, 일반적으로 매우 큰 값을 가집니다.
    cout << " v1.empty() = " << v1.empty() << endl;       // v1이 비어 있는지 여부를 출력합니다. 
    cout << " v1.capacity() = " << v1.capacity() << endl; // v1의 용량을 출력합니다. 용량은 현재 할당된 요소의 공간을 나타냅니다.
    cout << " v1 = " ;
        for ( int i = 0; i < N; i++){
            cout << v1[i] << " ";
        }
    cout << endl;
}