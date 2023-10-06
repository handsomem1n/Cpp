// virtual method

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() {
        cout << "Animal is making a sound." << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Dog is barking." << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Cat is meowing." << endl;
    }
};

int main() {
    Animal* animalPtr;

    Dog dog;
    Cat cat;

    animalPtr = &dog;
    animalPtr->makeSound(); // Dog의 makeSound() 함수가 호출됨

    animalPtr = &cat;
    animalPtr->makeSound(); // Cat의 makeSound() 함수가 호출됨

    return 0;
}
