/*
    ------------codeforce problem link ----

    ---> https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/P

    --> Try to Solve yourself before see the solution

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    int count = 0;
    bool inWord = false;

    for (char c : s)
    {
        if (isalpha(c))
        {
            if (!inWord)
            {
                count++;
                inWord = true;
            }
        }
        else
        {
            inWord = false;
        }
    }

    cout << count << endl;
    return 0;
}