#include<iostream>
#include<string>
using namespace std;

class Parent
{
    public:
        string parent;
        void details()
        {
            cout<<"Parent class "<<parent<<endl;
        }
};

class Child : public Parent
{
    public:
        string child;
        void details()
        {
            cout<<"Child class "<<parent<<endl;
            cout<<"Child class "<<child<<endl;
        }
};

class GrandChild : public Child
{
    public:
        string grandchild;
        void details()
        {
            cout<<"GrandChild class "<<parent<<endl;
            cout<<"GrandChild class "<<child<<endl;
            cout<<"GrandChild class "<<grandchild<<endl;
        }
};

int main()
{
    Parent p1;
    p1.parent = "Kanav";
    p1.details();
    Child c1;
    c1.parent = "Kanav";
    c1.child = "Daksh";   
    c1.details();
    GrandChild g1;
    g1.parent = "Kanav";
    g1.child = "Daksh"; 
    g1.grandchild = "Jayan";
    g1.details();
    return 0;
}