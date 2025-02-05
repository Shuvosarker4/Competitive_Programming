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
    // arr is the start index
    // arr+n is the next of the last index
    // to arrange in Desc use greater<int>()

    sort(arr, arr + n, greater<int>());

    // output the array in Descending Order
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    return 0;
}