// selection sort
#include <iostream>
using namespace std;

int main() {
    
   int arr[6]={10,3,2,45,22,18};
   
   
 for(int i=0; i<5; i++)
 {
   int index = i;
   for(int j=i+1; j<6; j++)
   {
       if(arr[j]<arr[index])
       {
           index = j;
           swap(arr[i], arr[index]);
        }
   }
 }   
   
   for(int t=0; t<=5; t++)
   {
       cout<<arr[t]<<" ";
   }
   
    
    return 0;
}