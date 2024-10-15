#include <iostream>
using namespace std;
int main()
{
    int choice;
    cout << "1 for mandhi\n2 for porotta\n3 for appam\n4 for biriyani\n5 for chaya\n place select your choice";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << " you have selected mandhi";
        break;
    case 2:
        cout << "you have selected porotta";
        break;
    case 3:
        cout << "you have selected appam";
        break;
    case 4:
        cout << "you have selected biriyani";
        break;
    case 5:
        cout << "you have selected chaya";
        break;
    defult:
        cout << "fool";
    }
    return 0;
}