#include <iostream>
using namespace std;

int main()
{
    int num1, num2, ope, value;
    bool oper = true;
    while (oper)
    {
        cout << "\nchoose an operation \n 1=addition\n 2=subtraction \n 3=multiplication\n 4=division \n 5=modules \n or 6 to stop\n";

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
    cout << "the end";
    return 0;
}
