#include <iostream>
using namespace std;

void mul(int i, int j, int sum = 0)
{
    sum = 0;
    sum = i * j;
    cout << "The 2 number is: " << sum << "\n";
}
void printNumber(int n, int m, int sum = 0)
{

    sum = 0;
    sum = n + m;
    cout << "The 2 number is: " << sum << "\n";
}

int main()
{
    int n, m;
    cout << "enter 2 number";
    cin >> n >> m;
    printNumber(n, m);
    mul(n, m);
    mul(n, m);
    return 0;
}
