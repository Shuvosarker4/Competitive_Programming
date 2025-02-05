/*
    ------------codeforce problem link ----

    ---> https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W

    --> Try to Solve yourself before watch the solution

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    char s, q;
    cin >> a >> s >> b >> q >> c;

    int sum = a + b;
    int sub = a - b;
    int mul = a * b;

    if (sum == c || sub == c || mul == c)
    {
        cout << "Yes";
    }
    else
    {
        if (s == '+')
        {
            cout << a + b;
        }
        else if (s == '-')
        {
            cout << a - b;
        }
        else if (s == '*')
        {
            cout << a * b;
        }
    }
    return 0;
}