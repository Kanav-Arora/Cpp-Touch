#include<iostream>
#include<map>
#include<string>
using namespace std;


/*
    Map stores key value pairs
    It is an associative array


*/

int main()
{
    map<string, int> maps;
    maps["Kanav"] = 100;
    maps["Shivam"] = -50;

    map<string, int> :: iterator iter;
    
    for(iter = maps.begin(); iter!=maps.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }

    return 0;
}