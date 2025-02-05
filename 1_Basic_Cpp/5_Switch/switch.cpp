#include <iostream>
using namespace std;
int main()
{
    int x = 3;
    switch (x)
    {
    case 1:
        cout << "x in One" << endl;
        break;
    case 2:
        cout << "x in Two" << endl;
        break;
    case 3:
        cout << "x in Three" << endl;
        break;

    default:
        cout << "Not Match" << endl;
        break;
    }
    return 0;
}