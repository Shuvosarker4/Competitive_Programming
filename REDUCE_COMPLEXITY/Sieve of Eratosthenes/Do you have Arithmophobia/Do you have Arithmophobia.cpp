/*

Problem Link : https://toph.co/p/do-you-have-arithmophobia

*/

#include <bits/stdc++.h>
using namespace std;
bool pali(int x)
{
    string s = to_string(x);
    string r = s;
    reverse(r.begin(), r.end());

    return r == s;
};
int prime(int l, int r)
{
    int cnt = 0;
    vector<bool> v(r + 1, true);
    v[0] = v[1] = false;

    for (int j = 2; j <= sqrt(r); j++)
    {
        if (v[j])
        {
            for (int i = j * j; i <= r; i += j)
            {
                v[i] = false;
            }
        }
    }

    for (int i = l; i <= r; i++)
    {
        if (v[i] && pali(i))
        {
            cnt++;
        }
    }
    return cnt;
};
int main()
{
    int l, r;
    cin >> l >> r;

    cout << prime(l, r);
    return 0;
}