#include<iostream>
using namespace std;
int main()
{
    int i,j,values[3][3];
    cout<<"enter value";

    for(i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        { 
            cin>>values[i][j];
        
        
        }
        
    }
    cout<<"enter values"<<"\n";

    for(i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        { 
            cout<<values[i][j];
        
        
        }
        cout<<"\n";
    }
    return 0;
}