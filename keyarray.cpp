#include<iostream>
using namespace std;
int main()
{
    int l,i,v[100],key,flag=0;
    cout<<"enter the array limit";
    cin>>l;
    cout<<"enter the array value";
    for(i=0;i<l;i++)
    {
        cin>>v[i];
    }
    cout<<"enter the search key:";
    cin>>key;
    for(i=0;i<l;i++){
        if(key==v[i]){
        flag=1;
        break;
        }
    }
    if(flag==1){
        cout<<"the array value:"<<i+1;}
        else
        {
            cout<<"array value note found";
        }
        return 0;
    
}