#include<iostream>
using namespace std;
int main()
{
    int n,i,flage=0;
    cout<<"enter a number";
    cin>>n;
    for (i=2;i<n/2;i++)
    {
        if(n%i==0){
        flage=1;
        break;}
    }
     if(flage==0){
     cout<<"prime number";}
     else
     {
        cout<<"not prime number";
     }
     return 0;
}