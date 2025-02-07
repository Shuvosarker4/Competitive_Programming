/*
Problem Statement

You will be given two strings S and X. You need to replace all X
from string S with a '#' sign.

Input Format

First line will contain T, the number of test cases.
Next T lines will contain a line with S and X.


Constraints
1 <= T <= 1000
1 <= |S|, |X| <= 1000
|X| <= |S|


Output Format
For each test cases output the modified string S.


Sample Input 0
2
rahimisagoodguy good
canyoutellmewhereicanfindheriwillbegreatefultoyouifyoutellmetheanswer you


Sample Output 0
rahimisa#guy
can#tellmewhereicanfindheriwillbegreatefulto#if#tellmetheanswer

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s, x;
        cin >> s >> x;

        // if not found s.find(x) will be indicate in the end(-1)
        while (s.find(x) != -1)
        {
            // 1st parameter is index number and 2nd parameter is how many char will erase/remove
            // 3rd parameter is what you want to replace "#"
            s.replace(s.find(x), x.size(), "#");
        }

        cout << s << endl;
    }

    return 0;
}
