#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<vector<int> > v1(3, vector<int>(3));

    /*

        In 2D vector, we need to define like this:

            vector< vector<int>> a(M, vector<int> (N));
        
        because in 2D vector every row is a vector.

    */

    vector<vector<int> > v1;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            v1[i][j] = 0;
        }
    }

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<v1[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}