#include <iostream>

// 함수 템플릿 정의
template <typename T>
T max(T a, T b)
{
    return (a > b) ? a : b;
}

int main()
{
    int intMax = max(5, 10);  // int 자료형에 대한 max 함수 인스턴스화
    double doubleMax = max(3.14, 2.71);  // double 자료형에 대한 max 함수 인스턴스화
    std::cout << "Maximum of 5 and 10: " << intMax << std::endl;
    std::cout << "Maximum of 3.14 and 2.71 : " << doubleMax << std::endl;
    
    int doubleMax2 = max(3.14, 2.71);
    std::cout << "Maximum of 3.14 and 2.71 : " << doubleMax2 << std::endl;

    return 0;
}
