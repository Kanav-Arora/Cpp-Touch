#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    bool flag = true;
    for(int i=2; i<sqrt(n); i++)
    {
        if(n%i==0)
        {
            cout<<"Non-Prime number"<<endl;
            flag = false;
            break;
        }
    }
    if(flag==true)
    {
        cout<<"Prime number"<<endl;
    }
    return 0;
}