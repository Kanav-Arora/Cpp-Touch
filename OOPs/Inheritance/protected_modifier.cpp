#include<iostream>
using namespace std;

/*
    Inheritance:
                                Public derivation       Private derivation      Protected derivation
    Private members               Not inherited             Not inherited           Not inherited
    Protected members               Protected               Private                 Protected
    Public memebers                 Public                  Private                 Protected

*/

class Base
{
    protected:
        int a=10;
};

class Derived : protected Base
{
    public:
        int getVal()
        {
            return a;
        }
};

class Child : protected Derived
{
    int getVal()
    {
        return 0;
    }
};

int main()
{
    Derived d;
    cout<<d.getVal();
    return 0;
}