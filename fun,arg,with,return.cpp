#include<iostream>
using namespace std;
int sum(int,int);
int main()
{
    int a,b,result;
    cout<<"enter two number ";
    cin>>a>>b;
    result=sum(a,b);
     cout<<"result is: "<<result;

    return 0;
}
int sum(int num1,int num2)
{
    int result;
    result=num1*num2;
   return result;
}