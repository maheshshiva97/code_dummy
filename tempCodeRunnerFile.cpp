#include <iostream>
using namespace std;
int met(int a[100][100],int n)
{
    int i,j;
    cout<<"metrics is:";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        cout<<a[i][j]<<" ";
        cout<<"\n";
        
    }

    
}



int main()
{
    int a[100][100],n;
    int i,j;
    
    cout<<"enter array limit";
    cin>>n;
    cout<<"enter array valus";

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        cin>>a[i][j];
    }
    met(a,n);


    return 0;
}