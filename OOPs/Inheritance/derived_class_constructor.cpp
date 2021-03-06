#include<iostream>
using namespace std;

/*
    If base class constructor don't have any arguments there is no need of any constructor.
    If both base and derived class have a constructor, base class constructor is executed first

    In Multiple Inheritance:
        Base classes are constructed in the order they are declared
    
    In Multi-Level Inheritance:
        Constructor are executed in order of inheritance.

    Virtual Base Class:
        Constructor of VBC are invoked before non-virtual construcotrs
        If there are multiple VBC, they are invoked in their order

    Derived-Constructor(arg1, arg2, arg3...): Base1-Constructor(arg1,arg2), Base2-Constructor(arg3,arg4), Base3-Constructor(arg5,arg6)
    {

    }
*/

class Base
{
    protected:
        int a;
    public:
        Base()
        {
            a = 7;
        }

};

class Derived : public Base
{
    int d;
    public:
        Derived() : Base()
        {
            d =6;
        }
        void printData()
        {
            cout<<"a is: "<<a<<"d is: "<<d<<endl;
        }
};

int main()
{
    Derived obj1;
    obj1.printData();
    return 0;
}