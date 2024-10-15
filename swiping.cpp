#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 20;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "result is a :" << a << "\n"
         << "result is b :" << b;

    return 0;
}