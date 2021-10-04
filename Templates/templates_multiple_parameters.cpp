#include<iostream>
using namespace std;

template <class T1, class T2>
class myclass
{
    public:
        T1 data1;
        T2 data2;
        void display()
        {
            cout<<data1<<endl;
            cout<<data2<<endl;
        }
};

int main()
{
    myclass<int,float> obj;
    obj.data1 = 12;
    obj.data2 = 1.2;
    obj.display();
    return 0;
}