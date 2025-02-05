#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "Hello";
    string s2 = "World";

    // Compare two string
    cout << (s1 == s2); // return 0/1

    /*

        <-----String Capacity Function---->

    */
    // get size of a string
    cout << s1.size(); // output is 5

    // clear the string or make a string size empty
    s1.clear();
    cout << s1.empty(); // return true or false

    // resize the string size
    s1.resize(6); // s1 string size is now 6

    // resize with added value
    s1.resize(6, 'x'); // resize the string remaining size added with a char x

    /*

        <-----String Element Access---->

    */
    cout << s1[0] << endl;      // value of 0th index
    cout << s1.at(0) << endl;   // value of i'th index
    cout << s1.back() << endl;  // last index value
    cout << s1.front() << endl; // First index value

    /*

        <-----String Modifiers---->

    */

    string a = "Hello";
    string b = "World";

    // concatenate string
    a += b;
    cout << a << endl; // output is Hello World

    a.append(b);           // Hello World
    a.push_back('M');      // Char M will be added in the last index of string a
    a.pop_back();          // remove last character
    a.assign("Shuvo");     // assign Shuvo is string a
    a.erase(4, 1);         // 1st(4) parameter is index number and 2nd(1) parameter is how many char will erase/remove
    a.replace(4, 3, "so"); // erase + replace with "so"
    a.insert(5, "Shuvo");  // add string in a word

    /*

        <-----String Iterator---->

    */

    string s; // --> Hello
    cin >> s;

    cout << *s.begin() << endl;     // Start index char(H)
    cout << *(s.end() - 1) << endl; // Last index char(o)

    for (auto it = s.begin(); it < s.end(); it++)
    {
        cout << *it << endl; // output a string though iterator also use dereference for the output
    }
    return 0;
}