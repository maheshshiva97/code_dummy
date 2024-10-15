#include <iostream>
using namespace std;
int main()
{
    int v1, v2, v3;
    cout << "enter the 3 values";
    cin >> v1 >> v2 >> v3;
    if (v1 == v2 && v1 == v3)
    {
        cout << "triangle is equilateral";
    }

    else if (v1 == v2)
    {
        cout << " triangle is isosceles";
    }
    else

    {
        cout << "triangle is scalene";
    }
    return 0;
}