#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k=1;
    cout<<"enter the number";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i+1;j++){
            cout<<k++<<" ";
        }
        cout<<endl;
    }
    return 0;
}