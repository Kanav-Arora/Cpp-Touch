#include<iostream>
#include<vector>
using namespace std;


template <class T>
void display(vector<T> &v)
{
    cout<<"Size of vector: "<<v.size()<<endl;

    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }

    cout<<endl;
}

int main()
{
    vector<int> vec1;
    int n = 4;
    for(int i=1; i<=n; i++)
    {
        int val;
        vec1.push_back(i);
    }
    display(vec1);
    vec1.pop_back();
    display(vec1);

    vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter + 2, 5, 10);

    // vec1.at(<index>);    //* to get the element at index i
    display(vec1);

    //* Another way of initialization

    int element, size = 5;
    vector<int> vec2;
    display(vec2);
    vector<char> vec3(4);
    display(vec3);
    vector<char> vec4(vec3);    // vec4 from vec3
    display(vec4);
    vector<int> vec5(6,3);    // 6 vector element of 3s
    display(vec5);
    

    
    return 0;
}