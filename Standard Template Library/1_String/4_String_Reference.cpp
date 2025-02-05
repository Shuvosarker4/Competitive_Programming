#include <bits/stdc++.h>
using namespace std;

// & is the reference ,now the string Hello will be World
void ref(string &s)
{
    s = "world";
}
int main()
{
    string s = "Hello";

    ref(s);

    cout << s << endl; // output is World
    return 0;
}