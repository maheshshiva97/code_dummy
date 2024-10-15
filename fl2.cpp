#include<iostream>
using namespace std;
int main()
{
  int n,i,sum=0;
  cout<<"enter a number";
  cin>>n;
  for(i=1;i<=n;i++){
    sum=sum+i; 
  }   
    cout<<"result ="<<sum; 
    

  return 0;
}