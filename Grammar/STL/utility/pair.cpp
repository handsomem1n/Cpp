#include <iostream>
#include <utility> // pair를 사용하기 위해 포함

int main() {
    std::pair<int, int> coordinates; // 정수 두 개를 묶는 pair 선언
    coordinates.first = 1; // 첫 번째 요소에 1 대입
    coordinates.second = 2; // 두 번째 요소에 2 대입

    std::cout << "X: " << coordinates.first << ", Y: " << coordinates.second << std::endl;

    return 0;
}
