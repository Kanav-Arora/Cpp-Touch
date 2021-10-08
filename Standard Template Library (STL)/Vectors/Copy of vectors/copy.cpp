#include<iostream>
#include<vector>
using namespace std;

int main()
{

    // Method 1: Iterative method           -       Deep copy (change in element of one does not affect the other)

    vector<int> vect1;
    vect1.push_back(1);
    vect1.push_back(2);
    vect1.push_back(3);
    vect1.push_back(4);

    vector<int> vect2;
    for (int i=0; i<vect1.size(); i++)
        vect2.push_back(vect1[i]);
  
    cout << "Old vector elements are : ";
    for (int i=0; i<vect1.size(); i++)
        cout << vect1[i] << " ";
    cout << endl;
  
    cout << "New vector elements are : ";
    for (int i=0; i<vect2.size(); i++)
        cout << vect2[i] << " ";
    cout<< endl;
    
    vect1[0] = 2;

    cout << "The first element of old vector is :";
    cout << vect1[0] << endl;
    cout << "The first element of new vector is :";
    cout << vect2[0] <<endl;


    // Method 2: Using assignment operator


    vector<int> vect3;
    vect3.push_back(1);
    vect3.push_back(2);
    vect3.push_back(3);
    vect3.push_back(4);

    vector<int> vect4;
    vect4 = vect3;
  
    cout << "Old vector elements are : ";
    for (int i=0; i<vect3.size(); i++)
        cout << vect3[i] << " ";
    cout << endl;
  
    cout << "New vector elements are : ";
    for (int i=0; i<vect4.size(); i++)
        cout << vect4[i] << " ";
    cout<< endl;
    vect3[0] = 2;
  
    cout << "The first element of old vector is :";
    cout << vect3[0] << endl;
    cout << "The first element of new vector is :";
    cout << vect4[0] <<endl;



    // Method 3 : By using inbuilt functions

    //* copy(first_iterator_o, last_iterator_o, back_inserter())


    vector<int> vect5;
    vect5.push_back(1);
    vect5.push_back(2);
    vect5.push_back(3);
    vect5.push_back(4);

    vector<int> vect6;
    copy(vect5.begin(), vect5.end(), back_inserter(vect6));
  
    cout << "Old vector elements are : ";
    for (int i=0; i<vect5.size(); i++)
        cout << vect5[i] << " ";
    cout << endl;
  
    cout << "New vector elements are : ";
    for (int i=0; i<vect6.size(); i++)
        cout << vect6[i] << " ";
    cout<< endl;
    vect5[0] = 2;
  
    cout << "The first element of old vector is :";
    cout << vect5[0] << endl;
    cout << "The first element of new vector is :";
    cout << vect6[0] <<endl;


    //* assign(first_iterator_o, last_iterator_o)

    vector<int> vect7;
    vect7.push_back(1);
    vect7.push_back(2);
    vect7.push_back(3);
    vect7.push_back(4);

    vector<int> vect8;
    vect8.assign(vect7.begin(), vect7.end());
  
    cout << "Old vector elements are : ";
    for (int i=0; i<vect7.size(); i++)
        cout << vect7[i] << " ";
    cout << endl;
  
    cout << "New vector elements are : ";
    for (int i=0; i<vect8.size(); i++)
        cout << vect8[i] << " ";
    cout<< endl;
    vect7[0] = 2;
  
    cout << "The first element of old vector is :";
    cout << vect7[0] << endl;
    cout << "The first element of new vector is :";
    cout << vect8[0] <<endl;

    return 0;
}