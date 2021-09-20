#include <iostream>
#include <string>
using namespace std;

/*
    Forms of Inheritance:
        - Single Inheritance
        - Multilevel Inheritance
            Deriving a class from already derived class
            Animal -> Mammal -> Human
        - Hierarchical Inheritance
            One parent class has multiple sub classes
        - Hybrid Inheritance
            Combination of multiple and multilevel inheritance
                                A
                                |
                          ______ ______
                         |             |
                         B             C
                         |             |
                          ______ ______
                                |
                                D
        - Multiple Inheritamce
            Derived class with more than one base class
            Employee      -|
                            ->  Programmer
            Assistant     _| 
*/

class Employee
{
    public:
    int id;
    float salary;
        Employee(int id, float salary)
        {
            this->id = id;
            this->salary = salary;
        }
        Employee(){}

};

//* derived class syntax
/*
    visibility mode can be Public or Private
    Public: Base class public members will be public in derived class
    Private: Base class public members will be private in derived class

    class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
    {
        methods/members
    }

    Note:
    - Default Visibility mode is private
    - Private members of base class are not inherited in derived class
*/

class Teacher : public Employee
{
    public:
        string dept;
        Teacher(int id, float salary, string dept) : Employee(id, salary)           // this line is calling the paramterized constructor
                                                                                    // base class: Employee, removing id,salary will call
                                                                                    // default constructor
        {
            this->dept = dept;
        }
};


int main()
{
    Employee e1(1,3000);
    cout<<e1.id<<endl;
    cout<<e1.salary<<endl;
    Teacher t1(2,3500,"CSE");
    cout<<t1.id<<endl;
    cout<<t1.salary<<endl;
    cout<<t1.dept<<endl;
    return 0;
}