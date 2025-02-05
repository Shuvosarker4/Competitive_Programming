#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *a = new int; // dynamic variable
    *a = 100;

    cout << *a << endl; // value
    cout << a << endl;  // address
    return 0;
}