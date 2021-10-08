#include<iostream>
#include<typeinfo>
using namespace std;

/*
    Type Inference refers to automatic deduction of the data type of an expression in a programming language.

    auto

    - The auto keyword specifies that the type of the variable that is being declared will be automatically deducted from its initializer. In case of functions, if their return type is auto then that will be evaluated by return type expression at runtime.   

    - The variable declared with auto keyword should be initialized at the time of its declaration only or else there will be a compile-time error 


    decltype


    It inspects the declared type of an entity or the type of an expression. Auto lets you declare a variable with particular type whereas decltype lets you extract the type from the variable so decltype is sort of an operator that evaluates the type of passed expression. 
*/

int fun1() { return 10; }

int main()
{
    auto var = 4;
    decltype(fun1()) x;
    cout << typeid(var).name() << endl;
    cout << typeid(x).name() << endl;

    return 0;
}