#include <iostream>
using namespace std;

void mul(int c1, int c2, int c3, int c4, int c5, int c6)
{
    int ope, oper, num1, num2, value;
    while(oper)
    {
    cout << "\nchoose an operation \n c1=addition\n c2=subtraction \n c3=multiplication\n c4=division \n c5=modules \n or c6 to stop\n";

    cin >> ope;

    if (ope == 6)
    {
        oper = false;
        continue;
    }
    cout << "\n enter the numbers to be operated\n";
    cin >> num1 >> num2;
    switch (ope)
    {
    case 1:
        value = num1 + num2;
        cout << "\nthe addition value of two numbers is\n"
             << value;

        break;

    case 2:
        value = num1 - num2;
        cout << "the subtraction value of two numbers is\n"
             << value;

        break;

    case 3:
        value = num1 * num2;
        cout << "the multiplication value of two numbers is\n"
             << value;

        break;

    case 4:
        value = num1 / num2;
        cout << "the division value of two numbers is\n"
             << value;

        break;

    case 5:
        value = (num1 % num2);
        cout << "the modules of two numbers is \n"
             << value;

        break;
    default:
        cout << "invald input";
        break;
    }
    }
    cout<<"endl";
}
int main()
{
    int c1, c2, c3, c4, c5, c6;

    mul(c1, c2, c3, c4, c5, c6);
    return 0;
}
