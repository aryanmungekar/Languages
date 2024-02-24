#include<iostream>
using namespace std;

int main(){


// * is used to store pointers

    int a = 9;
    int* b = &a;

// & is useed before any integer to get the address
    cout<<&a<<endl<<"\n"<<b<<"\n"<<"\n";

// * is used to disable the pointer
    cout<<*b;


// pointer to pointer

    int** c = &b;

    cout<<&a<<endl;
    cout<<c<<endl;
    cout<<&b<<endl;
    cout<<*c<<endl;
    cout<<**c<<endl;


    return 0;
}