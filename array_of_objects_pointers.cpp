#include<iostream>
using namespace std;

class Shop
{
    int id;
    float price;
    static int count;
    public:
        void setData(int);
        void getData(void);
};

int Shop::count = 0;
void Shop :: setData(int price)
{
    this->price = price;
    id = count;
    count++;
}

void Shop::getData()
{
    cout<<"Id: "<<id<<" Price: "<<price<<endl;
}

int main()
{
    Shop *ptr = new Shop[3];
    ptr->setData(65);
    (ptr+1)->setData(75);
    (ptr+2)->setData(85);

    ptr->getData();
    (ptr+1)->getData();
    (ptr+2)->getData();
    return 0;
}