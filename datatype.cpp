#include<iostream>                  // pre-processor directive

// iostream is the header file for input and output

using namespace std;            // we don't need to write std again and again

// main is the entry point for the execution of program
int main()
{
    int a;              // declaration
    a= 12;              // initialisation

    cout<<"size of a is "<<sizeof(a)<<endl;

    float b = 12.367;
    cout<<"size of b is "<<sizeof(b)<<endl;

    char c = 'a';
    cout<<"size of c is "<<sizeof(c)<<endl;

    bool d = false;
    cout<<"size of d is "<<sizeof(d)<<endl;

    short int si;
    long int li;

    cout<<"size of si is "<<sizeof(si)<<endl;
    cout<<"size of li is "<<sizeof(li)<<endl;

    return 0;                                   // exit status of a function
}
