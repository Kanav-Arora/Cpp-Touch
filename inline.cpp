#include<iostream>
using namespace std;

/*
    For inline function compiler replaces the function call with the block of code of function.
    This is effective is the body of the function is small and we need to call it again and again.
*/


inline int product(int a, int b)
{
    return a*b;
}

int main()
{
    int a=5, b=6;
    cout<<"Product of a and b is "<<product(a,b)<<endl;
    cout<<"Product of a and b is "<<product(a,b)<<endl;
    cout<<"Product of a and b is "<<product(a,b)<<endl;
    cout<<"Product of a and b is "<<product(a,b)<<endl;
    cout<<"Product of a and b is "<<product(a,b)<<endl;
    cout<<"Product of a and b is "<<product(a,b)<<endl;
    cout<<"Product of a and b is "<<product(a,b)<<endl;
    return 0;
}