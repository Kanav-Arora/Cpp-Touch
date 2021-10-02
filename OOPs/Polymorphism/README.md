# Polymorphism

One name and multiple forms

    Types of polymorphism:
        - Compile Time or Early Binding or Static Binding
            Function Overloading
            Operator Overloading

        - Run Time or Dynamic Binding
            Compiler defers the invoking of functions
            Function Overriding by using Virtual Functions


## Virtual Functions

Rules for virtual functions:
- They cannot be static
- They are accessed by object pointers
- Virtual Function can be friend of another class
- A virtual function in base class might not be used
- If a virtual function is defined in a base class, there is no necessity of redefining it in a derived class.
- If virtual function is not redefined in derived class, it will be invoked in base class
            

## Abstract Base Class and Pure Virtual Function

Pure Virtual Function:

So in virtual function 
    if derived class does not override the virtual function then base class function will be called

    But with pure virtual function we are creating a condition that derived classes must override the virtual function

    This means that the class with pure virtual function is made to be inherited.


Note:

- We cannot create object of Abstract Class
- Abstract class have atleast one virtual function