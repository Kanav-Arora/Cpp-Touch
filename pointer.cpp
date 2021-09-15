#include<iostream>
using namespace std;

int main()
{
    // Pointers store the memory address of a variable

    int a =3;
    int* b = &a;

    // &    -    address of operator
    // *    -    dereferencing operator

    cout<<"Value of a is: "<<a<<endl;
    cout<<"Value of a is: "<<*b<<endl;
    cout<<"Memory address of a is: "<<b<<endl;
    cout<<"Memory address of a is: "<<&a<<endl;
    cout<<"Memory address of b is: "<<&b<<endl;

    return 0;
}