// Complex library
// operator overloading : 연산자를 함수로 구현
#include <iostream>
#include <complex>

using namespace std;

class Complex
{
    double re, im;

public:
    Complex(double r = 0, double i = 0); // constructor
    ~Complex() {}
    double real() { return re; }
    double imag() { return im; }
    Complex add(const Complex &c) const; // 이 메서드는 한 개의 Complex 객체를 인자로 받아 현재 객체와 더한 새로운 Complex 객체를 반환
    void print() const;
};

Complex::Complex(double r, double i) : re(r), im(i) {}
Complex Complex ::add(const Complex &c) const
{
    Complex result(re + c.re, im + c.im);
    return result;
}

void Complex::print() const
{
    cout << re << " + " << im << "I" << endl;
}

int main()
{
    const Complex x(2, 3);
    Complex y(-1, -3), z;
    x.print();
    y.print();
    z = x.add(y);
    z.print();
    return 0;
}