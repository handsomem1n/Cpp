#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> myVector(5, 10); // 크기 5로 설정하고 모든 요소를 10으로 초기화한 벡터 생성
    
    // 그렇다면, g크기의 2차원 벡터가 생성되고 모든 요소를 10으로 채우는 명령어는?
    
    int g = 5; // 예를 들어 g를 5로 가정
    vector<vector<int>> matrixxx(g, vector<int>(g, 10));
/*
이 코드를 단계별로 설명하겠습니다:

int g = 5;는 변수 g를 정의하고 값을 5로 설정합니다. 이것은 2차원 벡터의 크기를 결정하는 데 사용됩니다. 여기서는 크기를 5로 설정하였습니다.
vector<vector<int>> matrix는 2차원 벡터를 선언하는 부분입니다. matrixxxx는 이름을 가진 2차원 벡터입니다.
vector<int>(g, 10)은 int 타입의 요소를 가지는 크기 g의 1차원 벡터를 생성하고, 이 벡터의 모든 요소를 10으로 초기화합니다. 즉, {10, 10, 10, 10, 10}과 같은 1차원 벡터를 생성합니다.
vector<vector<int>>(g, vector<int>(g, 10))는 g 크기의 2차원 벡터를 생성합니다. 각 행은 vector<int>(g, 10)로 초기화되며, 모든 요소가 10으로 채워진 행이 g개 생성됩니다.
결과적으로, matrixxx는 크기가 gxg이고 모든 요소가 10으로 초기화된 2차원 벡터가 됩니다. 이렇게 생성된 matrixxx를 사용하여 2차원 행렬을 나타낼 수 있습니다.
*/

}