#include<iostream>
using namespace std;
int main()
{
    int l1,l2,i,n,j,a[100],b[10],temp;
    cout<<"enter the two array limit:";
    cin>>l1>>l2;
    cout<<"enter the array value:";
    for(i=0;i<l1;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the array value:";
    for(i=0;i<l2;i++)
    {
        cin>>b[i];
    }
       n=l1+l2;
    for(i=0;i<n;i++)
    {
        a[l1+i]=b[i];
    }
    for ( i = 0;i<n; i++)
    {
        for(j=0;j<n;j++){
        if(a[i]<a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
          }
        }
         }
    
    cout<<"result:";
    for(i=0;i<n;i++){
   cout<<a[i]<<"\t";}
    return 0;
}