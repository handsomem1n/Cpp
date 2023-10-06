// Animal 클래스의 소멸자가 가상 소멸자(virtual destructor)로 선언되지 않았기 때에 Dog과 Cat의 소멸자가 호출되지 않는다.
// if ~Animal() { cout << "Animal 소멸자" << endl; }에 virtual를 추가한다면 Dog, Cat 소멸자가 호출된다.
//  
#include <iostream>

using namespace std;

class Animal
{
public:
    Animal() { cout << "Animal 생성자" << endl; }
    /* 여기에 virtual 추가 시 Dog, Cat 소멸자 호출됨*/~Animal() { cout << "Animal 소멸자" << endl; }
    virtual void speak() { cout << "Animal speak()" << endl; }
};

class Dog : public Animal
{
public:
    Dog() { cout << "Dog 생성자" << endl; }
    ~Dog() { cout << "Dog 소멸자" << endl; }
    void speak() { cout << "멍멍" << endl; }
};

class Cat : public Animal
{
public:
    Cat() { cout << "Cat 생성자" << endl; }
    ~Cat() { cout << "Cat 소멸자" << endl; }
    void speak() { cout << "야옹" << endl; }
};

int main()
{
    Animal *a1 = new Dog();
    a1->speak();
    delete a1;

    Animal *a2 = new Cat();
    a2->speak();
    delete a2;

    return 0;
}