#include<iostream>
using namespace std;
int main()
{
    int i,j,k,row;
    cout<<"enter the row";
    cin>>row;
    for (i=1;i<=row;i++){
        for(j=0;j<i;j++){cout<<" ";}
        
        for(k=0;k<=row;k++)
        {
            cout<<" * ";
        }
            cout<<"\n";
        }

return 0;
}