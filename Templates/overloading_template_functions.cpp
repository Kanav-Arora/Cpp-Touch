#include<iostream>
using namespace std;


template <class T>
class Kanav
{
    T data;
    public:
        Kanav(T a)
        {
            data = a;
        }

        void display(void);
};

template <class T>
void Kanav<T> :: display()
{
    cout<<data<<endl;
}

void func(int a)
{
    cout<<"int a: "<<a<<endl;
}

template <class T>
void func(T a)
{
    cout<<"T a: "<<a<<endl;
}

int main()
{
    Kanav<int> k(6);
    k.display();
    func(4);        // exact match is the highest priority
    return 0;
}