#include<iostream>
using namespace std;
int main()
{
  int n,i,j,m=5,l=10,choice,result;
  cout<<"place enter a number";
   cin>>n;
   for(i=0;i<=n;i++){
    for(j=0;j<i;j++){
        cout<<" * ";
    }
    cout<<"\n";
   }

   cout<<"1 sum\n2 mul\n3 div\n choice your";
    cin>>choice;
if(choice==1){
    result=m+l;
}
else if(choice==2)
{
    result=m%l;
}
else if(choice==3){
    result=m*l;
}
else{
     cout<<"your fool";}
     cout<<result;

   return 0;
}