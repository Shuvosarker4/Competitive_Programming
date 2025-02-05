/*
    ------------codeforce problem link ----

    ---> https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/Q

    --> Try to Solve yourself before see the solution

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;

    bool firstWord = true;

    while (ss >> word)
    {
        if (!firstWord)
        {
            cout << " ";
        }
        firstWord = false;

        reverse(word.begin(), word.end());
        cout << word;
    }

    cout << endl;
    return 0;
}