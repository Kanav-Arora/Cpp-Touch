#include<iostream>
using namespace std;

/*
    Ambiguity Resolution in Inheritance
*/

class Base1
{
    public:
        void greet()
        {
            cout<<"How are you?"<<endl;
        }
};

class Base2
{
    public: 
        void greet()
        {
            cout<<"Hey"<<endl;
        }
};

class Derived : public Base1, public Base2
{
    int a;
    public:
        void greet()
        {
            Base1::greet();
        }
};

int main()
{
    Base1 obj1;
    Base2 obj2;
    obj1.greet();
    obj2.greet();
    Derived obj3;
    obj3.greet();
    return 0;
}