/*
    ------------codeforce problem link ----

    --->  https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I

    --> Try to Solve yourself before see the solution

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;
        vector<int> A(N);

        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        int minValue = INT_MAX;
        int minAiPlusI = A[0] + 0;

        for (int j = 1; j < N; j++)
        {
            minValue = min(minValue, A[j] + j + minAiPlusI);
            minAiPlusI = min(minAiPlusI, A[j] - j);
        }

        cout << minValue << endl;
    }

    return 0;
}