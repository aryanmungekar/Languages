
#include <iostream>
using namespace std;

int main() {
    
    int nums[] = {9,6,4,2,3,5,7,0,1};
    
    int size = sizeof(nums)/sizeof(nums[0]);
    
int count=0, i=0;
    
          while(i<=9)
          {
              count=count+i;
              i++;
          }
          
          int j=0, numcount=0;
          while(j<=9)
          {
              numcount= numcount + nums[j];
              j++;
          }
    
     
     int ans=count-numcount;
     
     cout<<ans;
           

    return 0;
}