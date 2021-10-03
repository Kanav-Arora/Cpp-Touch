#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    // writing in a file

    ofstream out("sample.txt");
    string str = "Hey Kanav here!";
    out<<str;    
    out.close();    
    
    
    // reading from a file
    
    ifstream in("sample.txt");
    str.empty();
    in>>str;  
    // use getline(in,str) - to read whole line 
    cout<<str;

    return 0;
}