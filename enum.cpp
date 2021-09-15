#include<iostream>
using namespace std;

int main()
{
    enum E {red, yellow, blue, green};
    E e1 = red;
    cout<<e1<<endl;
    cout<<endl;
    enum C {pink, brown, grey=10, white, black=1};
    cout<<pink<<endl;
    cout<<brown<<endl;
    cout<<grey<<endl;
    cout<<white<<endl;
    cout<<black<<endl;
    return 0;
}