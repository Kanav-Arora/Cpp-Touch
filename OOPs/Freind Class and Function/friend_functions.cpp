#include<iostream>
using namespace std;

/*

    Properties of friend function:
        - Not in scope of class
        - It cannot be called from the object of class i.e c1.sumComplex is invalid
        - Can be invoked without help of any object.
        - Usually contains objects as arguments
        - Can be declared inside public or private section of the class, scope doesn't matter
        - It cannot access members directly by their name, they need a member function or membership operator.

*/

class Complex
{
    int a,b;
    public:
        void setNumber(int n1, int n2)
        {
            a=n1;
            b=n2;
        }
        friend Complex sumComplex(Complex o1, Complex o2);          // we are giving this function access to the private data members of complex class
        void printNumber()
        {
            cout<<"Your number is "<<a<<"+"<<b<<"i"<<endl;
        }
};

Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber(o1.a+o2.a, o1.b + o2.b);
    return o3;
}

int main()
{
    Complex c1,c2;
    c1.setNumber(2,3);
    c2.setNumber(4,5);

    c1.printNumber();
    c2.printNumber();

    Complex c3 = sumComplex(c1,c2);
    c3.printNumber();
    return 0;
}


