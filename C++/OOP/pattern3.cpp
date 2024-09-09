#include<iostream>
using namespace std;

int main(){

int row,col,n;
//cout<<"Enter the value :";
//cin>>n;

// Right sided triangle pattern
    for(row=1;row<=5;row=row+1){
       
        for(col=1;col<=5-row;col=col+1)
        {
            cout<<" ";
        }
    
        for(col=1;col<=row;col=col+1)
        {
            cout<<"*";
        }
       cout<<endl;

    }cout<<endl;


// 1,22,333 in right sided triangle
 for(row=1;row<=5;row=row+1){
       
        for(col=1;col<=5-row;col=col+1)
        {
            cout<<" ";
        }
    
        for(col=1;col<=row;col=col+1)
        {
            cout<<row;
        }
       cout<<endl;

    }cout<<endl;

//1,12,123 in right sided triangle 
 for(row=1;row<=5;row=row+1){
       
        for(col=1;col<=5-row;col=col+1)
        {
            cout<<" ";
        }
    
        for(col=1;col<=row;col=col+1)
        {
            cout<<col;
        }
       cout<<endl;

    }cout<<endl;


//a,ab,abc in right sided triangle 
 for(row=1;row<=5;row=row+1){

        for(col=1;col<=5-row;col=col+1)
        {
            cout<<" ";
        }
    
        for(char name='A'; name<='A'+row-1; name=name+1)
        {
            cout<<name;
        }
       cout<<endl;

    }cout<<endl;

    return 0;
}