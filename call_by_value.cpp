#include<iostream>
using namespace std;

void swap(int a, int b)
{
    int temp =a;
    a = b;
    b = temp;
}

int main()
{
    int a=4, b=5;
    cout<<"Old value of a "<<a<<" and old value of b "<<b<<endl;
    swap(a,b);
    cout<<"Old value of a "<<a<<" and old value of b "<<b<<endl;
    return 0;
}


/*
    There's no change in the value of the a and b
    because we are swapping the value of formal parameters i.e local parameters of the swap function.
*/