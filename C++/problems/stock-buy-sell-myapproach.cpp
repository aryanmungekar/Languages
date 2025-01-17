#include <iostream>
using namespace std;

int main() {
    
    int arr[]={7,1,5,3,6,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int cp=0, mp=0;
    
    for(int st=0; st<n; st++)
    {
        for(int end=st+1; end<n; end++)
        {
            cp = arr[end]-arr[st];
            
            mp = max(cp, mp);
        }
    }
    
    cout<<mp;
    
  

    return 0;
}