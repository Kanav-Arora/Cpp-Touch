#include<iostream>
using namespace std;

/*
    Destructor takes no argument or value
*/
class Num{
   int count=0;
    public:
    Num()
    {
        count++;
        cout<<"Constructor called "<<count<<"th time"<<endl;
    }

    ~Num()
    {
        cout<<"Destructor called"<<count<<"th time"<<endl;
        count--;
    }
};

int main()
{
    cout<<"Inside main function"<<endl;
    cout<<"Creating two objects"<<endl;
    Num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects with defined scope"<<endl;
        Num n2, n3;
        cout<<"Exiting this block"<<endl;
    }
        cout<<"Exiting main block"<<endl;

    return 0;
}
