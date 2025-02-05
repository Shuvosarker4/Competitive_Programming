#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    // show the int output upto 2 decimal
    // before use setprecision include the iomanip header file
    double a;
    cin >> a; // 3.1416541

    cout << fixed << setprecision(3) << a << endl;
    // output result would be 3.141
    return 0;
}