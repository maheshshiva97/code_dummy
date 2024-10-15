#include <iostream>
using namespace std;

int main() {
    int num1, num2, sum = 0;

    do {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        
        sum = num1 + num2;
        cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;
        
    } while (sum==0);  
    cout << "sum values are  0 . Exiting." << endl;

    return 0;
}