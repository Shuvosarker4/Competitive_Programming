/*
    ------------codeforce problem link ----

    ---> https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y

    --> Try to Solve yourself before see the solution

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, q;
    cin >> n >> q;

    long long int v[n];

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    long long int pre[n];
    pre[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = v[i] + pre[i - 1];
    }
    while (q--)
    {

        long long int l, r;
        cin >> l >> r;
        l--;
        r--;

        long long int sum;
        if (l == 0)
        {
            sum = pre[r];
        }
        else
        {
            sum = pre[r] - pre[l - 1];
        }
        cout << sum << endl;
    }
    return 0;
}