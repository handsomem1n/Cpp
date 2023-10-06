#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 정수형 벡터 생성
    vector<int> intVector;

    // 크기를 지정하여 정수형 벡터 생성
    vector<int> sizedIntVector(5); // 크기 5로 초기화된 벡터

    // 값을 가지고 초기화된 정수형 벡터 생성
    vector<int> initializedIntVector = {1, 2, 3, 4, 5};

    // 다른 벡터를 복사하여 생성
    vector<int> copiedIntVector(initializedIntVector);

    // 벡터의 크기 확인
    cout << "intVector의 크기: " << intVector.size() << endl;

    // 벡터에 요소 추가
    intVector.push_back(10);
    intVector.push_back(20);
    intVector.push_back(30);

    // 벡터의 크기 다시 확인
    cout << "intVector의 크기: " << intVector.size() << endl;

    // 벡터의 요소 접근
    cout << "intVector의 첫 번째 요소: " << intVector[0] << endl;
    cout << "intVector의 두 번째 요소: " << intVector[1] << endl;

    // 벡터의 모든 요소 출력
    for (int i = 0; i < intVector.size(); i++) {
        cout << intVector[i] << " ";
    }
    cout << endl;

    return 0;
}
