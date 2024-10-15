#include <iostream>
using namespace std;

int main()
{
    int n,j;
    cout << "Enter the size of the  matrix: ";
    cin >> n;

    int matrix[n][n];
    cout << "Enter the  matrix values:" << endl;

    for(int i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        cin>>matrix[i][j];
    }
    
    for (int i = 0; i < n; i++)

    {
        cout << "\n the primary daiganal is : " << "\t" << matrix[i][i];
    }
    cout<<"\nnext\n";
    for (int i = 0; i < n; i++)`

    {
        cout << "\n the secondary daiganal is : " << "\t" << matrix[i][n - i - 1];
    }

    int primaryDiagonalSum = 0;
    int secondaryDiagonalSum = 0;

    for (int i = 0; i < n; i++)
    {
        primaryDiagonalSum += matrix[i][i];
        secondaryDiagonalSum += matrix[i][n - i - 1];
    }

    cout << "\nSum of the primary diagonal: " << primaryDiagonalSum << endl;
    cout << "\nSum of the secondary diagonal: " << secondaryDiagonalSum << endl;

    return 0;
}