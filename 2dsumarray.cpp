#include <iostream>
using namespace std;
int main()
{
  int a[100][50], b[100][20];
  int i, n, m, j;
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
      cout << a[i][j] + b[i][j] << " ";
    }
    cout << "\n";
  }
  return 0;
}