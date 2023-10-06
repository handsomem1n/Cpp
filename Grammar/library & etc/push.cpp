#include <iostream>
#include <string>

using namespace std;

int main() {
    string my_string = "Hello";

    // 문자 '!'를 문자열 끝에 추가합니다.
    my_string.push_back('!');

    // 결과: "Hello!"
    cout << my_string << endl;

    return 0;
}
