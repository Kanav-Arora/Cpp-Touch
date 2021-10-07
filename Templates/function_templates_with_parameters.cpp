#include<iostream>
using namespace std;

template <class T1, class T2>
T1 avg(T1 a, T2 b)
{
    T1 res = (T1)(a+b)/2;
    return res;
}


int main()
{
    cout<<"This will return int: "<<avg(5,15)<<endl;
    cout<<"This will return int: "<<avg(5,15.5)<<endl;
    cout<<"This will return float: "<<avg(5.1,15)<<endl;
    cout<<"This will return float: "<<avg(5.6,15.5)<<endl;
    return 0;
}