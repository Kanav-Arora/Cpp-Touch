#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cout<<"For loop block"<<endl;
    }

    int i=0;
    while(i<n)
    {
        cout<<"While loop block"<<endl;
        i++;
    }

    i=0;
    do
    {
        cout<<"Do-While loop block"<<endl;
        i++;
    }while(i<n);
    return 0;
}
