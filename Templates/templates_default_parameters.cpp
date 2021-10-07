#include<iostream>
using namespace std;

template <class T1 = int, class T2 = float>
class Kanav{
    public:
        T1 a;
        T2 b;
        Kanav(T1 x, T2 y)
        {
            a = x;
            b = y;
        }

        void display()
        {
            cout<<"value of a is: "<<a<<endl;
            cout<<"value of b is: "<<b<<endl;
        }
};

int main()
{
    Kanav<> k(2,3.2);
    k.display();
    return 0;
}