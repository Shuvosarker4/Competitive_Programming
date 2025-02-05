/*
    ------------codeforce problem link ----

    ---> https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Z

    --> Try to Solve yourself before see the solution

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    while (q--)
    {
        /* code */
        int x;
        cin >> x;
        bool found = false;
        int l = 0;
        int r = n - 1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (arr[mid] == x)
            {
                found = true;
                break;
            }
            if (x > arr[mid])
            {
                // move right
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        if (found)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }
    return 0;
}