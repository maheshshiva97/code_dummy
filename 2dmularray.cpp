#include <iostream>
using namespace std;
int main()
{
  int a[100][50], b[100][20], c[100][100];
  int i, n, m, j, k;
  cout << "enter array row and colum:";
  cin >> n >> m;
  cout << "place enter 1matrix\n";

  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    {
      cin >> a[i][j];
    }
  }
  cout << "place enter 2matrix\n";

  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    {
      cin >> b[i][j];
    }
  }
  cout << "result is printing:" << "\n";
  for (i = 0; i < n; i++)
  {

    for (j = 0; j < m; j++)
    {
      {
        c[i][j] = 0;
      }
      for (k = 0; k < m; k++)
      {
        c[i][j] += a[i][k] * b[k][j];
      }
    }
  }
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    {
      cout << c[i][j] << " ";
    }
    cout << "\n";
  }
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    {
      cout << a[i][j] << " ";
    }
    cout << "\n";
  }
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    {
      cout << b[i][j] << " ";
    }
    cout << "\n";
  }

  return 0;
}