#include<iostream>
using namespace std;

template <class T>
class Vector
{
    public:
        T* arr;
        int size;
        Vector(int m)
        {
            size = m;
            arr = new T[size];
        }
    T sumVec()
    {
        int sum=0;
        for(int i=0; i<size; i++)
        {
            sum+= this->arr[i];
        }
        return sum;
    }
};

int main()
{
    Vector<int> myvec(4);
    myvec.arr[0] = 4;
    myvec.arr[1] = 5;
    myvec.arr[2] = 6;
    myvec.arr[3] = 7;
    int sum = myvec.sumVec();
    cout<<sum;
    return 0;
}