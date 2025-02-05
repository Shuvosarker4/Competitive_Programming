/*
    ------------codeforce problem link ----

    --->  https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M

    --> Try to Solve yourself before watch the solution

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    char x;
    cin >> x;

    int t = int(x);

    if (t >= 65 && t <= 90)
    {
        cout << "ALPHA\nIS CAPITAL" << endl;
    }
    else if (t >= 48 && t <= 57)
    {
        cout << "IS DIGIT" << endl;
    }
    else
    {
        cout << "ALPHA\nIS SMALL" << endl;
    }
    return 0;
}