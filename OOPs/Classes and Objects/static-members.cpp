#include <iostream>
#include <typeinfo>
using namespace std;

class Employee
{
    int id;
    static int count; // initial value of count variable is 0
public:
    void setData(void)
    {
        cout << "Enter the ID:" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "ID of employee is:" << id << "count variable value is:" << count << endl;
    }
    static void getCount(void)
    {
        cout<<"Value of count is:"<<count<<endl;
    }
};

int Employee ::count = 1000; // default is 0

int main()
{
    Employee e1;
    e1.setData();
    e1.getData();
    Employee::getCount();
    e1.setData();
    e1.getData();
    Employee::getCount();
    return 0;
}