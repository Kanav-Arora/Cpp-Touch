#include<iostream>
using namespace std;

//Function prototype
/*
    We need to declare the function if the block of funtion is after main function.
    This tells compiler to look for the function below main function
*/

int sum(int, int);
int sum(int a, int b);
int sum(int c, int d);              // all of the three ways are acceptable
// int sum(int c,d);        this way is wrong

int main()
{
    int num1 = 5;
    int num2 = 2;
    cout<<sum(num1,num2)<<endl;
    return 0;
}


int sum(int a, int b)
{
    return a+b;
}

