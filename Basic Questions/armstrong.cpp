#include<iostream>
#include<cmath>
#include<typeinfo>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int check = n;
    int sum =0;
    while(n>0){
        int lastdigit = n%10;
        sum = sum+ pow(lastdigit,3);
        n = n/10;
    }
    if(sum==check){
        cout<<"Armstrong number"<<endl;
    }
    else if(sum!=check){
        cout<<"not an Armstrong number"<<endl;
    }
    return 0;
}