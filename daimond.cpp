#include <iostream>
using namespace std;
int main()
{
    int i, j, rows;
    cout << "enter the rows";
    cin >> rows;
    int space = rows - 1;
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= space; j++)
            cout << " ";
        for (j = 1; j <= (2 * i - 1); j++)
            cout << "*";

        cout << endl;
        space--;
    }

    space = 1;
    for (i = 1; i <= (rows - 1); i++)
    {
        for (j = 1; j <= space; j++)
            cout << " ";
        for (j = 1; j <= (2 * (rows - i) - 1); j++)
            cout << "*";
        cout << endl;
        space++;
    }
    return 0;
}
