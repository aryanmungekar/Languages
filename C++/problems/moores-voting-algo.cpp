//Moores voting algorithm for finding majority element

#include <iostream>
using namespace std;

int main() {
    
    int arr[]={1,1,2,1,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int freq=0;
    int ans=0;
    
    for(int i=0; i<n; i++){
        if(freq==0)
        {
            ans=arr[i];
        }
        if(ans==arr[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    cout<<ans;

    return 0;
}