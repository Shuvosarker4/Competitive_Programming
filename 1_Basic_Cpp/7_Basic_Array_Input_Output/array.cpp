#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n; // array size

    int arr[n]; // initialize array

    // input the array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // take input in array
    }

    // output the array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}