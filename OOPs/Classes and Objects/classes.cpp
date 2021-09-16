#include<iostream>
using namespace std;


class Employee
{
    private:                        // if we don't specify the scope then by default the scope is private
        int accountID;
        float salary;
    public:
        int empID;
        void setEmpId(int a);           // method declaration
        void getDetails()
        {
            cout<<empID<<endl;
            cout<<accountID<<endl;
            cout<<salary<<endl;

        }
        void setDetails(int accID, float salary)
        {
            accountID = accID;
            this->salary = salary;
        }
};

void Employee :: setEmpId(int a){
    Employee :: empID = a;
}

int main()
{
    int accID, id;
    float salary;
    cout<<"Bank Account No:"<<endl;
    cin>>accID;
    cout<<"Emp ID:"<<endl;
    cin>>id;
    cout<<"Salary:"<<endl;
    cin>>salary;

    Employee e1;
    e1.setEmpId(id);
    e1.setDetails(accID, salary);
    e1.getDetails();
    return 0;
}