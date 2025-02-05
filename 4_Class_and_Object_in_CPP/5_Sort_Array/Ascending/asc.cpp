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
    sort(arr, arr + n);

    // output the array in Ascending Order
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    return 0;
}