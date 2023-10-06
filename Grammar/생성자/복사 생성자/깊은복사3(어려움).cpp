#include <iostream>
#include <cstring>

using namespace std;

class Student
{
    char *name;

public:
    int id;
    Student(int n, const char *s)
    {
        id = n;
        name = new char[strlen(s) + 1];
        strcpy(name, s);
        cout << this << " : Student(int, char *)\n";
    }
    ~Student()
    {
        cout << this << " : ~Student\n";
        delete[] name;
    }
    Student(const Student &st)
    {
        id = st.id;
        name = new char[strlen(st.name) + 1];
        strcpy(name, st.name);
        cout << this << " : Student(Student&)\n";
    }
    void setName(const char *s)
    {
        delete[] name;
        name = new char[strlen(s) + 1];
        strcpy(name, s);
    }
    void print()
    {
        cout << this << " ] "
             << "name : " << name << " id : " << id << endl;
    }
};

Student newStudent(Student st)
{
    // Student st(s1);
    Student a(st.id + 1, "New");
    return a;
}

int main()
{
    Student s1(1, "Kim");
    Student s2 = newStudent(s1);
    s1.print();
    s2.print();
}

/*

main 함수가 시작됩니다.

Student s1(1, "Kim") : Student 클래스의 객체인 s1이 생성자 Student(int, const char*)를 호출하여 생성됩니다. 생성자가 호출되면서 s1 객체의 id는 1로, name은 "Kim"이 됩니다. s1 객체의 주소가 출력됩니다.

Student s2 = newStudent(s1) : newStudent 함수를 호출하여 s1 객체를 인자로 전달합니다. newStudent 함수가 호출되면서 s1 객체가 st 매개변수로 복사됩니다. st 객체의 복사 생성자 Student(const Student&)가 호출되고, st 객체의 id와 name 멤버 변수 값이 s1 객체에서 복사됩니다. st 객체의 주소가 출력됩니다.

newStudent 함수 내에서 Student a(st.id + 1, "New") : st 객체의 id 값을 1 증가시킨 값과 "New"를 인자로 가지고 Student 객체인 a가 생성됩니다. 생성자가 호출되면서 a 객체의 id는 st 객체의 id에 1을 더한 값이 되고, name은 "New"가 됩니다. a 객체의 주소가 출력됩니다.

s2 = a : s2 객체에 a 객체가 대입됩니다. 대입 연산자가 호출되면서 s2 객체의 id와 name 멤버 변수 값이 a 객체에서 복사됩니다.

s1.print() : s1 객체의 정보를 출력합니다. s1 객체의 주소와 name 멤버 변수 값인 "Kim", 그리고 id 멤버 변수 값이 출력됩니다.

s2.print() : s2 객체의 정보를 출력합니다. s2 객체의 주소와 name 멤버 변수 값인 "New", 그리고 id 멤버 변수 값이 출력됩니다.

main 함수가 종료되면서, s2 객체가 소멸됩니다. s2 객체의 주소가 출력되고, 소멸자 ~Student()가 호출되어 동적으로 할당된 name 멤버 변수의 메모리가 해제됩니다.

main 함수가 종료되면서, s1 객체가 소멸됩니다. s1 객체의 주소가 출력되고, 소멸자 ~Student()가 호출되어 동적으로 할당된 name 멤버 변수의 메모리가 해제됩니다.

*/