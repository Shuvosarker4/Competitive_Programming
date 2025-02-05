#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    // sorting the string
    sort(s.begin(), s.end());

    // range based for loop
    for (char c : s)
    {
        cout << c << endl;
    }
    return 0;
}