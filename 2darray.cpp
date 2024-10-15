#include <iostream>
using namespace std;
int main()
{
  int a[100][50];
  int i, n, m, j;
  cout << "enter array row and colum:";
  cin >> n >> m;
  cout << "place enter values";

  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    {
      cin >> a[i][j];
    }
  }
  cout << "result is printing:" << "\n";
  for (i = 0; i < n; i++)
  {

    for (j = 0; j < m; j++)
    {
      cout << a[i][j] << " ";
    }
    cout << "\n";
  }
  return 0;
}