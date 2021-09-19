#include<iostream>
using namespace std;

class Simple{
    int data1, data2, data3;
    public:
        Simple(int a, int b=1, int c = 2)
        {
            data1 =a;
            data2 =b;
            data3 =c;
        }

        void printData(){
            cout<<data1<<","<<data2<<" and "<<data3<<endl;
        }
};

int main()
{
    Simple s(1);
    s.printData();
    Simple s1(1,3);
    s1.printData();
    Simple s2(1,5,6);
    s2.printData();
    return 0;
}