#include <iostream>
using namespace std;

int sw(int a, int b)
{

    int temp, c;

    cout << "\nbefore swapping" << endl
         << "a = " << a << endl
         << "b = " << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "\nafter swapping" << endl
         << "a = " << a << endl
         << "b = " << b << endl;

    c=a+b;

    return c;
};

int main()
{

    cout << sw(10, 20);

    return 0;
}