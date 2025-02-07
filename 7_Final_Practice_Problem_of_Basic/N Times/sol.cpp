/*
    ------------codeforce problem link ----

    ---> https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/H

    --> Try to Solve yourself before see the solution

*/

#include <bits/stdc++.h>
using namespace std;
void solve(int n, char x)
{
    for (int i = 0; i < n; i++)
    {
        cout << x << " ";
    }
    cout << endl;
};
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        char x;
        cin >> x;

        solve(n, x);
    }
    return 0;
}