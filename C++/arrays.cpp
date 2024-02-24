#include<iostream>
using namespace std;

int main(){

    int marks[] ={12,23,34,45,12};
    cout<<marks[3]<<endl;


// any thing written inside [] is the max value of array
    int abc[3];
    abc[2] = 1;

    cout<<abc[2]<<endl;

// for loop to print array
    for (int i = 0; i < 7; i++)
    {
        cout<<marks[i]<<endl;
    }
    


    return 0;
}