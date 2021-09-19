#include<iostream>
using namespace std;

class Complex{
    // creating a constructor
    int a,b;
    public:
        Complex()                       // default constructor
        {
            cout<<"In default constructor"<<endl;
        }
        Complex(int, int);             // parameterized constructor
        void printData()
        {
            cout<<a<<"   "<<b<<endl;
        }
};

Complex:: Complex(int a, int b)
{
    this->a = a;
    this->b = b;
}

int main()
{
    Complex c = Complex(1,2);
    c.printData();
    return 0;
}