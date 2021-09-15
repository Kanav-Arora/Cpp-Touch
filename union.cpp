#include<iostream>
using namespace std;

union Student{
    int id;
    char favchar;
    int subjects;
};


int main()
{
    /*
            Here at last 'a' is saved so in memory a will be saved.
            On printing id will convert it in int
            Similary subjects will convert it in int
            for favchar datatype is already char so 'a' will be printed
    */


    union Student s1;
    s1.id = 7;
    s1.subjects = 6;
    s1.favchar = 'a';
    cout<<s1.id<<endl;
    cout<<s1.favchar<<endl;
    cout<<s1.subjects<<endl;
    return 0;
}