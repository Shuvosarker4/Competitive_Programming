/*
    ------------codeforce problem link ----

    ---> https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/F

    --> Try to Solve yourself before see the solution

*/

#include <bits/stdc++.h>
using namespace std;
long long int solve(int N, int X)
{
    long long int sum = 0;
    for (int i = 2; i <= N; i += 2)
    {
        sum += pow(X, i);
    }
    return sum;
};
int main()
{
    int X, N;
    cin >> X >> N;

    cout << solve(N, X) << endl;

    return 0;
}