#include<iostream>
using namespace std;

class Father
{
    public:
        string father;
        Father()
        {
            father = "kanav";
        }
};

class Mother
{
    public:
        string mother;
        Mother()
        {
            mother = "Adamay";
        }
};

class Child : public Father, public Mother
{
    public:
        string child;
        Child() : Father(), Mother()        // calling the default constructor of base classes
        {
            child = "jayan";
        }
        void display()
        {
            cout<<child<<"    "<<father<< "      "<<mother<<endl;
        }
};

int main()
{
    Child c;
    // c.father = "kanav";
    // c.mother = "adamay";
    // c.child = "jayan";
    c.display();
    return 0;
}