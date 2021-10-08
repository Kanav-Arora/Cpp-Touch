#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v1;
    v1.push_back(2);
    v1.push_back(1);
    v1.push_back(9);
    v1.push_back(4);
    v1.push_back(3);

    sort(v1.begin(), v1.end());
    for (auto x : v1)
        cout << x << " ";

    return 0;
}