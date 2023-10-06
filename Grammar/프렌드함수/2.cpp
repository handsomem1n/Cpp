#include <iostream>
using namespace std;

class Dog
{
    int age;

public:
    Dog(int a)
    {
        age = a;
        cout << "멍멍\n";
    }

    int getAge();
    friend const char* Com(Dog d, Cat c);
};

class Cat
{
    int age;

public:
    Cat(int a)
    {
        age = a;
        cout << "야옹\n";
    }
    int getAge();
    friend const char* Com(Dog d, Cat c);
};

int Dog::getAge()
{
    return age;
}

int Cat::getAge()
{
    return age;
}

const char* Com(Dog d, Cat c)
{
    return ((d.age == c.age) ? "동갑" : "동갑이 아님");
}

int main()
{
    Dog happy(5);
    Cat nabi(3);
    cout << happy.getAge() << "," << nabi.getAge();
    cout << Com(happy, nabi);
    return 0;
}
