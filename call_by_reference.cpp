#include<iostream>
using namespace std;

// C++ call by reference using pointers
void swap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;
}

// C++ call by reference using reference variables
void swapRef(int &a, int &b)
{
    int temp = a;
    a=b;
    b=temp;
}

int main()
{
    int a=4, b=5;
    cout<<"Value of a "<<a<<" and Value of b "<<b<<endl;
    swap(&a,&b);
    cout<<"Value of a "<<a<<" and Value of b "<<b<<endl;
    swapRef(a,b);
    cout<<"Value of a "<<a<<" and Value of b "<<b<<endl;
    return 0;
}