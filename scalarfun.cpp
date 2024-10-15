#include <iostream>
using namespace std;

void scalarMultiply(int arr[], int size, int scalar)
{
    for (int i = 0; i < size; ++i)
    {
        arr[i] *= scalar;
    }
}

int main()
{
    int n, k, i, arr[50];
    cout << "enter array size : ";
    cin >> k;
    cout << "enter the array value ";
    for (i = 0; i < k; i++)
        cin >> arr[i];
    cout << "ente the scalar value";
    cin >> n;
    int scalar = n;

    scalarMultiply(arr, k, scalar);

    cout << "Array after scalar multiplication: ";
    for (int i = 0; i < k; ++i)
    {
        cout << arr[i] << " ";
    }

    return 0;
}