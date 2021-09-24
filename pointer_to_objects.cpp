#include<iostream>
using namespace std;

class Complex
{
    int real, img;
    public:
        void getData()
        {
            cout<<"The real part is "<<real<<endl;
            cout<<"The imaginary part is "<<img<<endl;
        }
        void setData(int a, int b)
        {
            real = a;
            img = b;
        }
};

int main()
{
    Complex c1;
    Complex *ptr1 = &c1;
    c1.setData(1,54);
    c1.getData();

    (*ptr1).setData(5,6);       // parentheses are important because precedence of '.' operator is more than '*' operator 
    (*ptr1).getData();

    Complex *ptr = new Complex;
    (*ptr).setData(9,10);
    // (*ptr).getData();
    ptr->getData();             // other method to call functions
    return 0;
}