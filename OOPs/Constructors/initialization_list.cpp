#include<iostream>
using namespace std;

class A
{
    int a,b;
    public:
        // A(int i, int j) : a(i), b(j)
        // A(int i, int j) : a(i), b(i+j)
        // A(int i, int j) : a(i), b(a +j)
        //* A(int i, int j) : b(j), a(i+b)  --> This method will raise error as initialization is done in order of declaration. So as a is declared first so it will be initialized first. But i+b will give garbage value as b is uninitialized.
        A(int i, int j): b(j), a(i)
        {
            cout<<"Value of a: "<<a<<endl
                <<"Value of b: "<<b<<endl;
        }
};

int main()
{
    A a(1,2);
    return 0;
}