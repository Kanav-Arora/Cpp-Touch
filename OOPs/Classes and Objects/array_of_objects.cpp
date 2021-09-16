#include<iostream>
using namespace std;

class Employee
{
    int id;
    int salary;
public:
    void setData(void)
    {
        cout << "Enter the ID:" << endl;
        cin >> id;
    }
    void getData(void)
    {
        cout << "ID of employee is:" << id<< endl;
    }
};


int main()
{
    Employee e[4];                  // array of objects of class Employee
    for(int i=0; i<4; i++)
    {
        e[i].setData();
        e[i].getData();
    }
    return 0;
}