/*
    ------------codeforce problem link ----

    ---> https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J

    --> Try to Solve yourself before see the solution

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);

    vector<int> charCounts(26, 0);

    for (char c : s)
    {
        if (isalpha(c))
        {
            charCounts[tolower(c) - 'a']++;
        }
    }

    for (int i = 0; i < 26; ++i)
    {
        if (charCounts[i] > 0)
        {
            cout << char(i + 'a') << " : " << charCounts[i] << endl;
        }
    }

    return 0;
}