#include<iostream>
using namespace std;
void sum(int,int);
int main()
{
    int a,b;
    cout<<"enter two number ";
    cin>>a>>b;
    sum(a,b);
    return 0;
}
void sum(int num1,int num2)
{
    int result;
    result=num1+num2;
    cout<<"result is: "<<result;
}