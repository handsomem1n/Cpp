#include <iostream>
#include <vector>
#include <string>

using namespace std;

#define N 3

template <class T>
void print_vector(vector<T> v, string s = "") // 템플릿으로 정의된 함수로, vector<T>를 인자로 받아 벡터의 내용을 출력하는 함수입니다. 두 번째 매개변수 s는 출력 전에 출력할 문자열을 지정하는 선택적 매개변수입니다. 
{
    cout << s << "(" << v.capacity() << ")";
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
    print_vector(v1, "v1 = ");
    v1[0] = 1;
    v1[1] = 2;
    v1[4] = 3;
    print_vector(v1, "v1 = ");
    cout << "v1.front() = " << v1.front() << endl; // v1의 첫 번째 요소인 front() 값을 출력합니다.
    cout << "v1.back() = " << v1.back() << endl; // v1의 마지막 요소인 back() 값을 출력합니다.
}