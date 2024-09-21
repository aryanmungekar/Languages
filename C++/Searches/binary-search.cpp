// Binary search
#include <iostream>
using namespace std;

int main() {
    
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 5;
    int start=0, end=n-1, mid;
    
    while(start<=end)
    {
        mid=(start+end)/2;
        
        if(arr[mid]==target)
        {
        cout<<mid;
        break;
        }

        else if(arr[mid]>target)
        end=mid-1;
        
        else
        start=mid+1;
    }
    
    

    return 0;
}