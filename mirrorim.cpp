#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    cout<<"enter a value";
    cin>>n;
   for(i=0;i<=n;i++){
    for(k=0;k<=i;k++)
    cout<<" ";
    for(j=0;j<=n-i;j++)
    {
        if(j==0||j==n-i||i==0)
         cout<<"* ";
   
    else
    cout<<"  "; }
    cout<<endl;
    
   }
   return 0;}