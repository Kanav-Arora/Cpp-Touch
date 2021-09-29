#include<iostream>
using namespace std;

class Student
{
    private:
        int roll_num;
    public:
        void setNum(int n)
        {
            roll_num = n;
        }

        int getNum()
        {
            return roll_num;
        }
};

int main()
{
    Student *s;
    s->setNum(5);
    int n = s->getNum();
    cout<<"Roll Number is: "<<n;
    return 0;
}