#include<iostream>
using namespace std;

int main(){

int col,row;


//triangle pattern
    for(row=1;row<=5;row=row+1){
       
        for(col=1;col<=5-row;col=col+1)
        {
            cout<<" ";
        }
    
        for(col=1;col<=row;col=col+1)
        {
            cout<<"*";
        }

        for(col=1;col<=row-1;col=col+1)
        {
             cout<<"*";
        }
       cout<<endl;

    }


// numbers triangle

        for(row=1;row<=5;row=row+1)
        {
            for(col=1;col<=5-row;col=col+1)
            {
                cout<<" ";
            }

            for(col=1;col<=row;col=col+1)
            {
                cout<<col;
            }

            for(col=1;col<=row-1;col=col+1)
            {
                cout<<col;
            }
            cout<<endl;
            
        }cout<<endl;


//reverse pattern
    for(row=0;row<=5;row=row+1)
    {
        for (col=0;col<=row-1;col=col+1)
        {
            cout<<" ";
        }
        
        for(col=1;col<=9-(row*2);col=col+1)
        {
            cout<<"*";
        }
        cout<<endl;
    }

//duihi
    for(row=1;row<=5;row=row+1)
    {      
        for(col=1;col<=5-row;col=col+1)
        {
            cout<<"*";
        }
        
        for (col=1;col<=row*2-2;col=col+1)
        {
            cout<<" ";
        }

        for(col=1;col<=5-row;col=col+1)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    for (row=4;row>=1;row=row-1)
    {
         // second half

        for(col=4;col>=row;col=col-1)
        {
            cout<<"*"; 
        }
        
        // for (col=1;col<=row*2-2;col=col+1)
        // {
        //     cout<<" ";
        // }


        // for(col=1;col<=row;col=col+1)
        // { 
        //     cout<<"*";
       // }cout<<endl;

       

        //cout<<endl;
    }
    







    return 0;
}