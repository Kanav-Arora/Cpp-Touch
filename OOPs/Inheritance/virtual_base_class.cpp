#include<iostream>
using namespace std;

/*
    Inheriting data memebers from class A to class B and C. And then Multiple Inheritance from Class B and C to class D leads to 
    ambiguity in data members. As we'll have two copies of all data members.
    
    Virtual Base Class is useful to avoid ambiguity.
*/


class Student
{
    protected:
        int roll_no;
    public:
        void set_number(int a)
        {
            roll_no = a;
        }
        void print_number()
        {
            cout<<"The roll no is "<<roll_no<<endl;
        }
};

class Test : virtual public Student{                    //or public virtual Student
    protected:
        float maths, science;
    public:
        void set_marks(float m1, float m2)
        {
            maths = m1;
            science = m2;
        }
        void print_marks()
        {
            cout<<"Marks obtained are here:"<<endl
                <<"Maths:"<<maths<<endl
                <<"Science:"<<science<<endl;
        }
};

class Sports : virtual public Student{
    protected:
        float score;
    public:
        void set_score(float sc)
        {
            score = sc;
        }
        void print_score()
        {
            cout<<"Score is: "<<score<<endl;
        }
};

class Result : public Test, public Sports
{
    float total;
    public:
        void display()
        {
            total = maths + science + score;
            print_number();
            print_marks();
            print_score();
            cout<<"Your total score is:"<<total<<endl;
        }
};

int main()
{
    Result harry;
    harry.set_number(1);
    harry.set_marks(50,70);
    harry.set_score(100);
    harry.display();
    return 0;
}