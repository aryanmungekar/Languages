#include<iostream>
using namespace std;

int main(){

// pointers in arrays   

    int arr[] = {1, 2, 3, 4, 5};

    int* p = arr;
    

// diffferent ways to access first value of array

    cout<< "value at *(p+0) is: " << *(p+0)<<endl; // here *p = *(p+0)
    cout<< "value at *p is: "<< *p<<endl; 
    cout<< "value at *p++ is: " << *p++<<endl;

    cout<< "value at p is: " << p <<endl; //here p stores address of arr



// in the above pointer 
    // p stores address of arr
    // *p stores first valve of arr ie arr[0]
    // *p++ also stores the same








    return 0;
}