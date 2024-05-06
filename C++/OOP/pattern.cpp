#include <iostream>
using namespace std;

int main()
{

// Print * box 5x5
     for (int i = 1; i <= 5; i = i + 1)
    {

        for (int j = 1; j <= 5; j = j + 1)
        {
            cout<<"*"<<" ";
        }
        cout << endl;
    }cout << endl;

// Print acsending numbers
    for (int i = 1; i <= 5; i = i + 1)
    {

        for (int j = 1; j <= 5; j = j + 1)
        {
            cout<<i<<" ";
        }
        cout << endl;
    }cout << endl;

    // Print 12345 in each row
    for (int i = 1; i <= 5; i = i + 1)
    {

        for (int j = 1; j <= 5; j = j + 1)
        {
            cout<<j<<" ";
        }
        cout << endl;
    }cout << endl;

    // Print 54321 in each row
    for (int i = 1; i <= 5; i = i + 1)
    {

        for (int j = 5; j >= 1; j = j - 1)
        {
            cout<<j<<" ";
        }
        cout << endl;
    }cout << endl;


    // Print aaaaa, bbbbb, ccccc... in each row
    
    for (int i = 1; i <= 5; i = i + 1)
    {
        int m=i-1;
        char letter='a'+m;

        for (int j = 1; j <= 5; j = j+1)
        {
            cout<<letter<<" ";
        }
        cout << endl;
    }cout << endl;



    // Print abcde... in each row 
    for (int i = 1; i <= 5; i = i + 1)
    {
        

        for (int j = 1; j <= 5; j = j+1)
        {
            int m=j-1;
            char letter='a'+m;

            cout<<letter<<" ";
        }
        cout << endl;
    }cout << endl;

    return 0;
}


/*

 for (int i = 1; i <= 5; i = i + 1)
    {

        for (int j = 1; j <= 5; j = j + 1)
        {
            cout<<"*";
        }
        cout << endl;
    }*/