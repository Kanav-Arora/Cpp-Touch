#include<iostream>
using namespace std;

/*
    Structure is a user defined datatype
    It is used to store values of different datatypes.
*/

struct Employee{
    int id;
    float salary;
    char favchar;
};

int main()
{
    struct Employee harry;
    harry.id = 1;
    harry.salary = 1250.50;
    harry.favchar = 'a';

    cout<<harry.id<<endl;
    cout<<harry.salary<<endl;
    cout<<harry.favchar<<endl;
    return 0;
}