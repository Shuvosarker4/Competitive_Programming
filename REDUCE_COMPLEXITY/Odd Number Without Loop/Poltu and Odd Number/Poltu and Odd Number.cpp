/*

    problem link : https://toph.co/p/poltu-and-odd-number


*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        long long s, m, h, l;
        cin >> s >> m;

        if (m % 2 == 0)
        {
            h = m / 2;
        }
        else
        {
            h = m / 2 + 1;
        }

        l = s / 2;

        long long result = h * h - l * l;

        cout << "Case " << i << ": " << result << "\n";
    }

    return 0;
}