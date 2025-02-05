/*
    ------------codeforce problem link ----

    ---> https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G

    --> Try to Solve yourself before see the solution

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int mid = n / 2;
    bool isP = true;

    for (int i = 0; i < mid; i++)
    {
        if (arr[i] != arr[n - i - 1])
        {
            isP = false;
            break;
        }
    }

    if (isP)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}