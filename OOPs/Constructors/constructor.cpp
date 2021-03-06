#include<iostream>
using namespace std;

class Complex{
    // creating a constructor
    int a,b;
    public:
        /*
            Constructor is a special function with name same as that of class.
            It is used to initialize objects of class
            It is invoked automatically while object creation.
        */
        Complex(int, int);
        void printData()
        {
            cout<<a<<"   "<<b<<endl;
        }

        /*

        Properties of a constructor

            - It should be declared in public scope of class.
            - They are invoked automatically whenever an object is created.
            - Constructors don't have a return type
            - It can have default arguments
            - We cannot refer to address of their arguments


        */ 
};

Complex:: Complex(int a, int b)
{
    this->a = a;
    this->b = b;
}

int main()
{
    // Implicit call
    Complex c1(1,2);
    c1.printData();
    // Explicit call
    Complex c = Complex(1,2);
    c.printData();
    return 0;
}