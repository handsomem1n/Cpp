// 함수 템플릿과 함수 중복 2

#include <iostream>

using namespace std;

template <class T>
void increase(T &v) { v += 1; }

template <>
void increase(int *&v) { v += 2; }

// function overloading
void increase(int *&v) { v += 3; }

// function overloading
// you can't specialize a template
void increase(char *ptr) { *ptr += 1; } // 함수 오버로딩을 통해 increase 함수의 또 다른 버전을 정의합니다. 이 버전은 char* 자료형에 대해 동작하며, 포인터가 가리키는 값을 1 증가시킵니다.

int main()
{
    char c[] = "abcdefg"; //

    cout << "c[5] = " << c[5] << endl; // 
    increase(c[5]); // c[5]는 c 배열의 5번째 요소를 가리키는 char 타입의 값입니다. 따라서 increase(char* ptr)라는 함수 오버로딩 버전이 해당 값을 받는 매개변수로서 매치됩니다. 따라서, increase 함수를 호출하여 c의 5번째 인덱스에 해당하는 문자를 1 증가시킵니다.
    cout << "c[5] = " << c[5] << endl;

    cout << "c= " << (void *)c << " / " << c << endl; // c의 주소와 문자열을 출력
    increase(c); // increase(c); 호출 시에는 c의 주소가 char* 타입의 매개변수 ptr로 전달됩니다.
    /*
    c는 char 배열의 이름이며, "배열 이름은 해당 배열의 첫 번째 요소를 가리키는 포인터"입니다. 즉, c는 char* 타입으로 해석될 수 있습니다.
    increase 함수를 호출하여 c의 문자열을 가리키는 포인터 char*를 전달합니다. ( increase(c);는 char* 타입의 변수인 c를 전달합니다. )
    
    주어진 코드에서 void increase(char* ptr) { *ptr += 1; }라는 함수 오버로딩 버전이 char* 타입의 매개변수를 받습니다. 따라서 increase(c); 호출 시에는 c의 주소가 char* 타입의 매개변수 ptr로 전달됩니다.
    이로써 increase(c); 호출은 char* 타입에 대한 오버로딩된 increase 함수가 선택되어 실행됩니다.
    */
    cout << "c= " << (void *)c << " / " << c << endl; // c의 주소와 문자열을 다시 출력합니다. 이전 출력과 비교하여 주소값이 변하지 않고 문자열 내용만 변한 것을 확인할 수 있습니다.
}