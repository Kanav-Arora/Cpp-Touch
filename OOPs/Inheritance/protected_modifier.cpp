#include<iostream>
using namespace std;

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