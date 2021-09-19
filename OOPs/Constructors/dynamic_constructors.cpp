#include<iostream>
using namespace std;


class Bank{
    int principal;
    int years;
    float interest;
    float returnValue;

    public:
        Bank(){}
        Bank(int p, int y, float r);
        Bank(int p, int y, int r);

        void show(void);
};

Bank::Bank(int p, int y, float r)
{
    cout<<"In float constructor";
    principal = p;
    years = y;
    interest = r;
    returnValue = principal;
    for(int i=0; i<years; i++)
    {
        returnValue*= (1+r);
    }
}

Bank::Bank(int p, int y, int r)
{
    cout<<"In int constructor";
    principal = p;
    years = y;
    interest = float(r)/100;
    returnValue = principal;
    for(int i=0; i<years; i++)
    {
        returnValue*= (1+interest);
    }
}

void Bank :: show()
{
    cout<<principal<<"   "<<returnValue<<endl;
}

int main()
{
    Bank b1,b2,b3;
    int p,y,R;
    float r;
    cin>>p;
    cin>>y;
    cin>>r;
    b1 = Bank(p,y,r);
    b1.show();
    cin>>p;
    cin>>y;
    cin>>R;
    b2 = Bank(p,y,R);
    b2.show();
    return 0;
}