#include <iostream>
using namespace std;

/*
    Structure is a user defined datatype
    It is used to store values of different datatypes.
    In C, structure cannot hold a member function
    but in C++, structure can have both data members as well as member function.

        - In C++, struct can have static data members
        - Static data members in C++ need to be initialized outside of the struct
*/

struct Employee
{
    int id;
    float salary;
    char favchar;
    static int count;
    Employee(int a);
    void setId(int);
    void setSalary(float);
    void setFavChar(int);
    void display(void);
};

int Employee::count = 0;
Employee::Employee(int a)
{
    this->id = count;
    count++;
}
void Employee::setId(int id)
{
    count++;
    this->id = id;
}
void Employee::setSalary(float salary)
{
    this->salary = salary;
}
void Employee::setFavChar(int favchar)
{
    this->favchar = favchar;
}
void Employee::display()
{
    cout << "count=" << count << endl;
    cout << id << endl
         << salary << endl
         << favchar << endl;
}

int main()
{
    Employee harry(1); // Unlike C, in C++ we don't need to use struct before variable declaration
    harry.setSalary(1000);
    harry.setFavChar('a');
    harry.display();
    return 0;
}