#include <iostream>
using namespace std;

struct office
{
    char Name;
    int roll;
    float Earning;
};

typedef union money
{
    char Name;
    int roll;
    float Earning;
} um;

int main()
{
    struct office rn;
    rn.Name = 'a';
    rn.roll=10;
    rn.Earning=10000000000;

    cout << rn.Name;
    cout<<rn.roll;
    cout<<rn.Earning;

cout<<"\n\n**********************************************\n\n";

    um aryan;
    aryan.Name='A';
    aryan.roll=20;
    cout<<aryan.Name<<endl;
    cout<<aryan.roll;

    return 0;
}

// Typedef: It is used to give shortcut to the structure names.

// Structure: we can use all the data types at a time 
// Union: We can use only one datatype at a time.
