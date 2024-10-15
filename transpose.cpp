#include<iostream>
using namespace std;
int main()
{
    
    int i,j,n;
    int a[100][100];
    cout<<"enter the array limit :";
    cin>>n;
    cout<<"enter the array values :";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        cin>>a[i][j];
       
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
    
       cout<<a[i][j];
       cout<<"\n";
    }
    int tran[100][100];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        tran[i][j]=a[j][i];
        cout<<a[j][i];
        cout<<"\n";
    }

    cout<<"transpose is:";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        cout<<tran[i][j];
        cout<<"\n";
    }

    


   return 0;
}