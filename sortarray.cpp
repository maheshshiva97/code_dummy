#include<iostream>
using namespace std;
int main()
{
    int i,j,l,v[100],temp;
    cout<<"enter the array limit:";
    cin>>l;
    cout<<"enter the array value:";
    for(i=0;i<l;i++)
    {
        cin>>v[i];
    }
    for(i=0;i<l-1;i++){
        for(j=i+1;j<l;j++){
        if(v[i]>v[j]){
            temp=v[i];
            v[i]=v[j];
            v[j]=temp;
          }
        }
     }
     cout<<"sorting values:";
     for(i=0;i<l;i++){
        cout<<v[i]<<"\t";
     }
     return 0;
}