/*
    ------------codeforce problem link ----

    ---> https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/V

    --> Try to Solve yourself before see the solution

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);

    while (s.find("EGYPT") != -1)
    {
        s.replace(s.find("EGYPT"), 5, " ");
    }

    cout << s << endl;
    return 0;
}