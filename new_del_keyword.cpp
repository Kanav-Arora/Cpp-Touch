#include<iostream>
using namespace std;

int main()
{
    // dynamically allocate memory 
    int *p = new int(4);
    cout<<*p<<endl;

    int *arr = new int[3];
    arr[0] =10;
    arr[1] = 2;
    arr[2] = 3;
    cout<<arr[0]<<endl
        <<arr[1]<<endl
        <<arr[2]<<endl;

    // delete keyword
    delete[] arr;
    cout<<arr[0]<<endl
        <<arr[1]<<endl
        <<arr[2]<<endl;
    return 0;
}