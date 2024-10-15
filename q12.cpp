#include <iostream>
using namespace std;
int main()
{
    string str1, str2;
    string str;
    cout << "enter two words";
    cin >> str1 >> str2;
    str = str1 + str2;
    cout << "str is:" << str;
    return 0;
}