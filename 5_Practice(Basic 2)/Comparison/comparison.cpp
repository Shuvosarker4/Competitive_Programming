/*
    ------------codeforce problem link ----

    --->  https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V

    --> Try to Solve yourself before watch the solution

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B;
    char S;

    cin >> A >> S >> B;

    if (S == '<')
    {
        if (A < B)
            cout << "Right\n";
        else
            cout << "Wrong\n";
    }
    else if (S == '>')
    {
        if (A > B)
            cout << "Right\n";
        else
            cout << "Wrong\n";
    }
    else if (S == '=')
    {
        if (A == B)
            cout << "Right\n";
        else
            cout << "Wrong\n";
    }
    return 0;
}