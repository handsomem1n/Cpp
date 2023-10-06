#include <iostream>
using namespace std;

class String // String 클래스
{
public:
    String()
    {
        cout << "String() 생성자 호출" << endl;
        strData = NULL; // 포인터에서는 0보단 null이라고 씀
        len = 0;
    }
    String(const char *str) // str이 const char를 가리키는 포인터라는 뜻
    {
        cout << "String(const char*) 생성자 호출" << endl;    // strData = str; : 이렇게 하면 얕은 복사가 일어남
        len = strlen(str);                                    // 3. (입력받은 str의 길이 저장)
        strData = new char[len + 1];                          // 2. 동적 메모리 할당을 통해 strData 포인터에 문자열 길이 + 1 만큼의 메모리를 할당. 4. 문자열은 뒤에 Null값이 있으므로 길이는 '문자열 길이+1'
        cout << "strData 할당 : " << (void *)strData << endl; // strData의 메모리 주소가 출력 // void*는 일반적으로 메모리 주소를 나타내는 포인터 타입으로 사용되며, 실제 데이터 타입에 대한 정보가 없습니다. 따라서, (void*)로 캐스팅하여 cout으로 출력하면, strData 포인터의 메모리 주소가 출력됩니다.
        strcpy(strData, str);                                 // strcpy() 함수를 사용하여 strData에 str의 내용을 깊은 복사, 1. 단 이 전에 str 데이터 자체를 동적할당 해야함. 그 전에는 복사를 할 수 없음
    }

    String(const String &rhs)
    {
        cout << "String(String &rhs) 생성자 호출" << endl;
        strData = new char[rhs.len + 1];                      // [len + 1] 아님.
        cout << "strData 할당 : " << (void *)strData << endl; // s2의 strData의 메모리 주소가 출력
        strcpy(strData, rhs.strData);                         // s2의 strData에 s1의 strData의 내용을 깊은 복사
        len = rhs.len;                                        // s2 객체의 문자열 길이를 s1 객체의 문자열 길이로 설정합니다 (len = rhs.len;).
    }

    ~String()
    {
        cout << "~String () 소멸자 호출" << endl;
        delete[] strData;                                      // String객체가 소멸될 때 해제
        cout << "strData 해제됨 :" << (void *)strData << endl; // 메모리 주소 출력 메시지를 출력
        strData = NULL;                                        // delete로 해준 뒤 null로 초기화하지않으면 해제된 메모리에는 더 이상 접근할 수 없게되므로, 해제된 메모리에 접근을 해줄 수 있게 strData = NULL;
    }
    char *GetStrData() const
    {
        return strData;
    }
    int GetLen() const
    {
        return len;
    }

private:
    char *strData;
    int len;
};

int main()
{
    String s1("안녕");
    String s2(s1); // (= String s2 = s1;) / >>String 클래스의 복사 생성자를 호출<<하여 s2 객체를 생성하고 s1 객체의 값이 복사됩니다. (주의: 복사 생성자가 명시적으로 정의되지 않았으므로, 컴파일러는 기본 복사 생성자를 자동으로 생성하여 얕은 복사를 수행합니다.)
    cout << " s2가 s1의 값을 복사 " << endl;

    cout << "1 " << s1.GetStrData() << endl; // s1 객체의 strData 값을 출력
    cout << "2 " << s2.GetStrData() << endl; // s2 객체의 strData 값을 출력
}