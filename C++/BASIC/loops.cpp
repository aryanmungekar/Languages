#include <iostream>
using namespace std;

int main()
{

    // If else and elif loops

    int i = 1;

    if (i == 1)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "not" << endl;
    }

    // for loop

    for (int i = 0; i < 10; i++)
    {
        cout << i << endl;
    }

    // loop with break statements

    for (int i = 0; i < 10; i++)
    {
        cout << i << endl;
        if (i == 2)
        {
            break;
        }
    }

// Continue

    for (int i = 0; i < 10; i++)
    {
        cout << i << endl;
        if (i == 2)
        {
            continue;
        }

    //It will skip the if condition on i=2.
    }

    return 0;
}