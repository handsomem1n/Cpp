#include <iostream>
#include <cstring>

using namespace std;

class MyString
{
    char *p;

public:
    MyString(const char *str = NULL);
    MyString(MyString &s);
    ~MyString();
    void print();
    int size();
};

MyString::MyString(const char *str)
{
    if (!str) // str이 NULL인지 확인합니다. 즉, 입력으로 받은 문자열이 NULL인지 체크
    {
        p = new char[1]; // 입력으로 받은 문자열이 NULL인 경우, p에 문자열을 저장할 수 있는 최소한의 공간인 char[1]을 동적으로 할당합니다.
        p[0] = '\0';
        return;
    }

    p = new char[strlen(str) + 1];
    strcpy(p, str);
}

MyString::MyString(MyString &s) // 복사 생성자는 MyString 객체를 다른 MyString 객체로 복사하는 역할을 합니다. s 객체의 문자열 길이에 맞게 메모리를 할당하고, 문자열을 복사하여 새로운 객체를 생성
{
    p = new char[s.size() + 1]; // deep copy
    strcpy(p, s.p);
}

MyString::~MyString() { delete[] p; }

void MyString::print() { cout << p << endl; }

int MyString::size() { return strlen(p); }

int main()
{
    MyString s1;
    MyString s2("c++");
    MyString s3(s2);
    s1.print();
    s2.print();
    s3.print();
    return 0;
}