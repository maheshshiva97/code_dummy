#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    int gretest, secondgretest, lastgretest;

    cout << "Enter 3 numbers: ";
    cin >> num1 >> num2 >> num3;

    if (num1 > num2 && num1 > num3)
    {
        if (num2 > num1 && num2 > num3)
        {
            gretest = num2;
        }
        else if (num3 > num1 && num3 > num2)
        {
            gretest = num3;
        }
        gretest = num1;
    }
    if (num2 > num3 && num2 < num1)
    {
        if (num2 > num1 && num2 > num3)
        {
            secondgretest = num2;
        }
            
                else if (num2 < num1 && num2 > num3)
                {
                    secondgretest = num2;
                }
            
            secondgretest = num2;
    } 
    else
    {
        
    }
    
    
    cout<<num1<<"is gretest number "<<"\n"<<num2<<"is secondgretest number"<<"\n";
    return 0;

} 