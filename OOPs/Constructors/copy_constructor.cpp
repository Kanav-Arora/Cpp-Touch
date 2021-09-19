#include<iostream>
using namespace std;

class Numbers{
    int a=0;
    public:
        Numbers(){}
        Numbers(int a)
        {
            this->a = a;
        }
        Numbers(Numbers &n)
        {
            cout<<"Copy constructor invoked"<<endl;
            a = n.a;
        }
        void show(){
            cout<<a<<endl;
        }
};

int main()
{
    Numbers a,b(1);
    a.show();
    b.show();
    Numbers c(b);           // copy constructor invoked
    c.show();
    Numbers d;              // copy constructor not invoked
    d = c;
    d.show();
    Numbers e = c;          // copy constructor invoked
    e.show();

    return 0;
}