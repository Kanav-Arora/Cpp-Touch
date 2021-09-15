#include<iostream>
using namespace std;

/*
    Typedef is used to shorten the keywords.
*/

typedef struct Employee{
    int id;
    float salary;
    char favchar;
}se;

int main()
{
    se harry;
    harry.id = 1;
    harry.salary = 1250.50;
    harry.favchar = 'a';

    cout<<harry.id<<endl;
    cout<<harry.salary<<endl;
    cout<<harry.favchar<<endl;
    return 0;
}