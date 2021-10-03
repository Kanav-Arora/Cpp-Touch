#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream out;
    out.open("sample.txt");
    out<<"This is me\n";
    out<<"This is also me\n";
    out<<"This is also me\n";
    out<<"This is also me\n";
    out<<"This is also me\n";
    out<<"This is also me\n";
    out.close();

    ifstream in;
    in.open("sample.txt");
    string str;

    while(in.eof()==false)
    {
        getline(in,str);
        cout<<str<<endl;
    }
    return 0;
}