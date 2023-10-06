#include <iostream>
#include <cstring>

using namespace std;

class Student
{
    int id;
    char *name;

public:
    Student(int n, const char *s)
    {
        id = n;
        name = new char[strlen(s) + 1];
        strcpy(name, s);
    }
    ~Student() { delete[] name; } 
    
    Student(const Student &st)
    {
        id = st.id;
        // 얕은복사.cpp와 대조되는 부분
            name = new char[strlen(st.name)+1]; 
            strcpy(name, st.name);
        // 얕은복사.cpp와 대조되는 부분
    }
    void setName(const char *s)
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