/*

이름을 저장하는 동적 메모리 공간이 별도로 할당되지 않는 문제점
얕은복사.cpp와대조되는깊은복사.cpp와 비교해보기.
*/

#include <iostream>
#include <cstring>

using namespace std;

class Student
{
    int id;
    char *name;

public:
    Student(int n, const char *s) // constructor, parameter : n, s
    {
        id = n;
        name = new char[strlen(s) + 1]; // name 멤버 변수에는 동적으로 할당된 문자열을 저장하기 위해 new 연산자를 사용
        strcpy(name, s);
    }
    ~Student() { delete[] name; } // 동적으로 할당된 name 멤버 변수의 메모리를 해제하기 위해 delete[] 연산자를 사용

    Student(const Student &st) // copy constructor : st 객체의 id 멤버 변수 값을 복사하고, name 멤버 변수에 대해서는 얕은 복사(shallow copy)를 수행
    {
        id = st.id;
        name = st.name; // shallow copy constructor
    }
    void setName(const char *s) //  학생 이름을 변경하는 함수입니다. 이전에 동적으로 할당된 name 멤버 변수의 메모리를 해제한 후, 새로운 문자열을 할당하여 저장
    {
        delete[] name;
        name = new char[strlen(s) + 1];
        strcpy(name, s);
    }
    void print()
    {
        cout << this << " ] " << "name : " << name << " id : " << id << endl;
    }
};

int main()
{
    Student s1(787877, "Kim"), s2(s1);
    s1.print();
    s2.print();
    s2.setName("Park");
    s1.print();
    s2.print();
    return 0;
}