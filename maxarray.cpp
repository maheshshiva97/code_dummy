#include<iostream>
using namespace std;
int main()
{
    int a[100];
    int i,limit,max=0;
    cout<<"enter array limit:";
    cin>>limit;
    cout<<"place enter values";
  
      for(i=0;i<limit;i++)

       { cin>>a[i];}
       for(i=0;i<limit;i++){
       if(a[i]>max)
       max=a[i];
       }
        cout<<"max value:";
        
        cout<<" "<<max;
    
       return 0;
}