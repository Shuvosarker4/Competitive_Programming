#include <bits/stdc++.h> // this header file have every header file
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    // max and min for 2 value
    int m = max(a, b);
    int n = min(a, b);

    // max or min for multiple value
    int ma = max({a, b, c, d});
    int na = min({a, b, c, d});

    cout << m << " " << n << " " << ma << " " << na << " " << endl;
    return 0;
}