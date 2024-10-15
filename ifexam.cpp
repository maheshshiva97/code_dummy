#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    int greatest, secondgreatest, lastgreatest;

    cout << "Enter 3 numbers: ";
    cin >> num1 >> num2 >> num3;

    
    if (num1 > num2 && num1 > num3)
    {
        greatest = num1;
        
        secondgreatest = (num2 > num3) ? num2 : num3;
    }
    else if (num2 > num1 && num2 > num3)
    {
        greatest = num2;
        
        secondgreatest = (num1 > num3) ? num1 : num3;
    }
    else
    {
        greatest = num3;
        
        secondgreatest = (num1 > num2) ? num1 : num2;
    }

    cout << greatest << " is the greatest number" << "\n";
    cout << secondgreatest << " is the second greatest number" << "\n";
    cout << lastgreatest <<" is the lastgreatest number" << "\n";
    return 0;
}