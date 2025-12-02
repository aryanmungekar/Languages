#include <iostream>
using namespace std;

int main() {
    
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int row = 3;
    int col = 3;
    
    
    int val=0;
     for(int i=0; i<row; i++){
        int sum = 0;
        for(int j=0; j<col; j++){
            sum=sum+matrix[i][j];
        }
        if(val<sum){
            val=sum;
        }
    }
    cout<<"highest value is "<<val;
    

    return 0;
}