// upcasting

#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking." << endl;
    }
};

int main() {
    Dog dog;
    dog.eat(); // Animal의 멤버 함수 호출
    dog.bark(); // Dog의 멤버 함수 호출

    Animal* animalPtr = &dog; // Dog 객체를 Animal 포인터로 업캐스팅

    animalPtr->eat(); // Animal의 멤버 함수 호출 (다형성)
    // animalPtr->bark(); // 컴파일 에러: Animal 포인터로는 Dog의 멤버에 접근할 수 없음

    return 0;
}
