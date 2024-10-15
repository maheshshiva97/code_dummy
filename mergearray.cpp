#include <iostream>
using namespace std;
void sum(int a[100], int b[100],int l1,int l2)

{
    int i, n;

    n = l1 + l2;
    for (i = 0; i < n; i++)
    {
        a[l1 + i] = b[i];
    }
    cout << "result:";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
}

int main()
{
    int l1, l2, i, n, j, a[100], b[10];
    cout << "enter the two array limit:";
    cin >> l1 >> l2;
    cout << "enter the array value:";
    for (i = 0; i < l1; i++)
    {
        cin >> a[i];
    }
    cout << "enter the array value:";
    for (i = 0; i < l2; i++)
    {
        cin >> b[i];
    }
    sum(a, b,l1,l2);
    return 0;
}
