#include <iostream>
using namespace std;
int main()
{
    int n, m, i, j,k, a[100][100], b[100][100], c[100][100];
    cout << "enter array valus";
    cin >> n >> m;
    cout << "enter the matrix 1 values";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "enter the matrix 2 values";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> b[i][j];
        }
        c[i][j] = 0;
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            for(k=0;k<n;k++)
           c[i][j] += a[i][k] * b[k][j];
            
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            cout << " " << c[i][j];
        cout << "\n";
    }
    return 0;
}
