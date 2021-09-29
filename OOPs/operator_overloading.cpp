#include <iostream>
using namespace std;

class Complex
{
    int real, img;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }
    Complex operator+(Complex const &obj)
    {
        Complex res;
        res.real = real + obj.real;
        res.img = img + obj.img;
        return res;
    }
    void print()
    {
        cout << real << "+ i" << img << endl;
    }
};

// Overloading <<

/*
    ostream& operator << (ostream& os, Complex &c1)
{
    os<<c1.a<<"+i"<<c1.b;
    return os;
}

*/

int main()
{
    Complex c1(3, 6), c2(4, 5);
    Complex val = c1 + c2;
    val.print();
}

/*

class Complex
{
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }
    void print() { cout << real << " + i" << imag << endl; }
    friend Complex operator+(Complex const &, Complex const &);
};

Complex operator+(Complex const &c1, Complex const &c2)
{
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

int main()
{
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2; // An example call to "operator+"
    c3.print();
    return 0;
}

*/