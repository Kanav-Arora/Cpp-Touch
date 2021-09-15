#include<iostream>
using namespace std;

int main()
{
    float x = 45;
    float &y = x;
    cout<<&x<<endl;
    cout<<&y<<endl;
    return 0;
}