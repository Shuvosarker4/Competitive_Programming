/*
    ------------codeforce problem link ----

    ---> https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E

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

    sort(arr, arr + n);

    // TRY TO SOLVE IT USING MAX FUNC
    cout << arr[n - 1]; // AFTER SORT IN ASCENDING LAST VALUE IS THE MAX
    return 0;
}