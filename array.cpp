#include <iostream>
using namespace std;
int main()
{
  int a[100];
  int i, limit;
  cout << "enter array limit:";
  cin >> limit;
  cout << "place enter values";

  for (i = 0; i < limit; i++)

  {
    cin >> a[i];
  }
  cout << "enter values are:";
  for (i = 0; i < limit; i++)
  {
    cout << " " << a[i];
  }

  return 0;
}
