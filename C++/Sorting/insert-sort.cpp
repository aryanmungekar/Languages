// Insertion sort
#include <iostream>
using namespace std;


int main() {
    
    int arr[]={7,6,5,4,3,2,1};
    
    int n= sizeof(arr)/sizeof(arr[0]);
    
    for(int i=1; i<n; i++)
    {
        for(int j=i; j>0; j--)
        {
            if(arr[j]<arr[j-1])
            {
                swap(arr[j],arr[j-1]);
            }
            
             else
             break;
        }
       
    }

    
    
    
    
    // printing array
    for(int k=0; k<n; k++)
    {
        cout<<arr[k]<<" ";
    }

    return 0;
}