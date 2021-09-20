#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

/*
    Character arrays:
        - Need to know size beforehand.
        - Larger size required for operations
        - No terminating extra character

    Strings:
        - No need to know size beforehand
        - Performing operations like concat is easy.
        - Terminate with a special character '\0'
*/


int main()
{
    //* types of string declarations
    string str;
    string str1(5, 'n');                // string of length 5 with each character as 'n'
    string str2 = "Kanav Arora";

    //* getline() function
    string str3;
    // getline(cin, str3);

    //* append() function
    string str4 = "fam";
    string str5 = "ily";
    str4.append(str5);
    cout<<str4<<endl;

    //* other way
    string str6 = "fam";
    string str7 = "ily";
    cout<<str6 + str7<<endl;

    //* String indexing
    string str8 = "Kanav";
    cout<<str8[1]<<endl;

    //* clear() function
    string str9 = "ndwbdhsnscbscdscbscs";
    str9.clear();

    //* compare strings
    /*
        int y = a.compare(b)
            if y>0:
                a>b
            if y=0:
                a==b
            if y<0:
                a<b
    */
    string str10 = "abc";               
    string str11 = "xyz";
    cout<< str11.compare(str10)<<endl;

    //* empty() function
    string str12 = "abc";
    str12.clear();
    cout<< str12.empty()<<endl;

    //* erase() function - delete characters from string
    string str13 = "abcdefg";
    str13.erase(3,3);           // erase(starting_index, number of characters to be removed)

    //* find() function - return index of first occurrence
    string str14 = "abcdefg";           
    cout<<str14.find("def")<<endl;

    //* insert() function
    string str15 = "anav";
    str15.insert(0,"k");

    //* length() function
    cout<<str15.size()<<endl;
    cout<<str15.length()<<endl;

    //* substr() function - substring function
    string str16 = str15.substr(1,4);
    cout<<str16<<endl;

    //* stoi() function - string to integer
    string str17 = "789";
    int x = stoi(str17);
    cout<<x<<endl;

    //* to_string() function 
    int y = 789;
    string str18 = to_string(y);
    cout<<str18<<endl;

    //* sort string         -       sorting it lexicographically
    string str19 = "mndsxbbx";
    sort(str19.begin(), str19.end());
    cout<<str19<<endl;

    return 0;
}