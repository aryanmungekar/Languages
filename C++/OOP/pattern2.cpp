#include<iostream>
using namespace std;

int main()
{

// Print half ascending triangle
int row, col;
    for(row=1;row<=5;row=row+1)
    {   
        for(col=1;col<=row;col=col+1)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }cout<<endl;


// Print ascending numeric triangle
for(row=1;row<=5;row=row+1){

    for(col=1;col<=row;col=col+1){
        cout<<col<<" ";
    }
    cout<<endl;
}cout<<endl;


// Print ascending numeric triangle
for(row=1;row<=5;row=row+1){

    for(col=1;col<=row;col=col+1){
        cout<<row<<" ";
    }cout<<endl;
}cout<<endl;

// Print descending numeric triangle
for(row=1;row<=5;row=row+1){

    for(col=row;col>=1;col=col-1){
        cout<<col<<" ";
    }
    cout<<endl;
}cout<<endl;



// Print ascending alphabatical triangle
for(row=1;row<=5;row=row+1){

    

    for(col=1;col<=row;col=col+1){
        int m=row-1;
        char letter='a'+m;

        cout<<letter<<" ";
    }
    cout<<endl;
}cout<<endl;


// Print desending * uposite triangle
for(row=5;row>=1;row=row-1){

    int cal = 5-(row-1);
    for(col=1;col<=row;col=col+1)
    {
        cout<<col<<" ";
    }
    cout<<endl;
    }cout<<endl;


// Print desending * uposite triangle
for(row=1;row<=5;row=row+1){

    int cal = 5-(row-1);
    for(col=5;col>=5-row+1;col=col-1)
    {
        cout<<col<<" ";
    }
    cout<<endl;
    }cout<<endl;


    return 0;
}