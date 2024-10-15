#include<iostream>
using namespace std;

int main(){
    int i,j,n,m,sum=0;
    cout<<"enter the row and column\n";
    cin>>n>>m;
    int a[n][m];
    cout<<"\nenter the matrix\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        cin>>a[i][j];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        cout<<a[i][j]<<" ";
        cout<<"\n";
    }
    cout<<" daigonal values : ";
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(i==j)
                {
            cout<<a[i][j]<<" ";
            sum+=a[i][j];
           
        }}}
         cout<<"\n"<<sum;
        return 0;
        
}