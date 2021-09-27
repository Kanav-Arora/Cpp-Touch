#include<iostream>
using namespace std;

class BaseClass
{
    public:
        int var_base;
        virtual void display()
        {
            cout<<"Var_Base value:"<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass
{
    public:
        int var_derived;
        void display()
        {
            cout<<"Var_base value:"<<var_base<<endl;
            cout<<"Var_derived value:"<<var_derived<<endl;
        }
};

int main()
{
    /*
        - Type of reference variable matters and not the object type assigned to it.
        - BaseClass pointer can access data memebers of base class and not the derived class.
        - Derived class pointer cannot point to base class object.
    */

    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived;
    base_class_pointer->var_base = 30;
    base_class_pointer->display();


    DerivedClass *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_base = 60;
    derived_class_pointer->var_derived = 40;
    derived_class_pointer->display();
    return 0;
}