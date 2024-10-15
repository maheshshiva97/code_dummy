#include<iostream>
using namespace std;
int main()
{
    int n,i,j,l,k;
    cout<<"enter a value";
    cin>>n;
    for(i=-n;i<n;i++){
        if(i<0)
        l=-i;
        else
        l=i;
        for(k=0;k<n-j-2;k++)
        cout<<" ";
        for(j=0;j<l+1;j++)
        cout<<" *";
        cout<<"\n";

    }
    return 0;



}