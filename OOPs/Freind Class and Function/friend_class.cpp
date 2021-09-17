#include <iostream>
using namespace std;

class Complex;

class Calculator
{
public:
    int addNumber(int a, int b)
    {
        return a + b;
    }

    Complex sumComplex(Complex o1, Complex o2);
};

class Complex
{
    int a, b;

public:
    friend Complex Calculator ::sumComplex(Complex c1, Complex c2);
    void setValue(int a, int b)
    {
        this->a = a;
        this->b = b;
    }

    void printNumber()
    {
        cout << a << "+" << b << "i" << endl;
    }
};

Complex Calculator :: sumComplex(Complex o1, Complex o2)
    {
        Complex o3;
        o3.setValue(o1.a + o2.a, o1.b + o2.b);
        return o3;
    }

int main()
{
    Complex c1,c2;
    c1.setValue(2,3);
    c2.setValue(4,5);

    c1.printNumber();
    c2.printNumber();

    Calculator c;

    Complex c3 = c.sumComplex(c1,c2);
    c3.printNumber();
    return 0;
}