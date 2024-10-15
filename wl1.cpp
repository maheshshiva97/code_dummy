#include<iostream>
using namespace std;
int main()
{
    int num1,num2,choice,result;
   cout<<"enter two number";
   cin>>num1>>num2;
    cout<<"1 for aditional\n2 for subraction\n3 multiplication\n4 division\n enter your choice";
    cin>>choice;
    if(choice==1)
    {
      result=num1+num2;
    }
    else if(choice==2){
      result=num1-num2;  
    }
    else if(choice==3){
        result=num1*num2;
    }
    else if(choice==4)
    {
        result=num1/num2;
    }
    else{
        cout<<"fool";
    }
    cout<<result;
   return 0; 
}