#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter a number";
    cin>>n;
    for(i=2;i<=n;i++){
       if(i%2==0){
        cout<<i<<"\n";
       }
    }
    return 0;
}