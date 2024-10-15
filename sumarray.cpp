#include <iostream>
using namespace std;
int main()
{
    int a[100];
    int i, n, sum = 0;
    cout << "place enter array value";
    cin >> n;
    cout << "enter the number";

    for (i = 0; i < n; i++)

    {
        cin >> a[i];
    }
    cout << "enter values are:";
    for (i = 0; i < n; i++)
    {
        cout << a[i];
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    cout << "result:" << sum;
    return 0;
}
