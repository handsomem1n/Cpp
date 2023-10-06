C++에서 점(.)은 멤버 선택 연산자로 사용됩니다. 이 연산자는 객체의 멤버 변수 또는 멤버 함수에 접근하기 위해 사용됩니다.
예를 들어, 클래스 "Person"이 있다고 가정해 봅시다. 이 클래스에는 "name"과 "age"라는 두 개의 멤버 변수가 있습니다.
"name"과 "age" 멤버 변수에 접근하려면 다음과 같이 "." 연산자를 사용합니다.

class Person {
public:
    string name;
    int age;
};

Person person1;
person1.name = "John";
person1.age = 30;
위의 코드에서, "." 연산자를 사용하여 person1 객체의 "name" 및 "age" 멤버 변수에 각각 "John"과 30이라는 값을 할당합니다.

--

또한, "." 연산자는 포인터를 사용하여 객체에 접근할 때도 사용됩니다.
예를 들어, 다음과 같이 "Person" 클래스의 객체를 동적으로 생성하고 포인터를 사용하여 객체에 접근할 수 있습니다.

Person *person2 = new Person();
person2->name = "Jane";
person2->age = 25;
위의 코드에서, "->" 연산자는 "." 연산자와 동일한 역할을 합니다.
포인터를 사용하여 person2 객체의 "name" 및 "age" 멤버 변수에 각각 "Jane"과 25라는 값을 할당합니다.