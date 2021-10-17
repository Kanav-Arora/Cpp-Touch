#include<iostream>
#include<list>
using namespace std;

/*

    Bidirectional linear datatype

*/

void print(list<int> l)
{
    list<int> :: iterator iter;
    iter = l.begin();
    while(iter!=l.end())
    {
        cout<<*iter<<" ";
        iter++;
    }
    cout<<endl;
}

int main()
{
    list<int> ls;
    // list<int> ls(7);         -       Empty list of size 7
    ls.push_back(5);
    ls.push_back(1);
    ls.push_back(2);
    ls.push_back(3);
    ls.push_back(4);

    list<int> :: iterator iter;

    iter = ls.begin();
    cout<<*iter<<" ";
    iter++;
    cout<<*iter<<" ";
    iter++;
    cout<<*iter<<" ";
    cout<<endl;

    print(ls);
    ls.pop_back();
    print(ls);
    ls.pop_front();
    print(ls);
    ls.push_back(9);
    ls.push_back(9);
    print(ls);
    ls.remove(9);               // remove all the occurrences of that element
    print(ls);

    


    return 0;
}