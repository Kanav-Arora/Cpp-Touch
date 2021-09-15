#include<iostream>
using namespace std;


// ratio is a default argument

int money(int money, float ratio=1.10)
{
    return money*ratio;
}


int main()
{
    cout<<money(1000)<<endl;
    cout<<money(1000,1)<<endl;
    const int a =4;
    cout<<a<<endl;
    // a =5;            this line will raise error as we cannot change a constant variable
    return 0;
}