/*

Take a string as input and separated the word

---To solve this we can use stringstream---

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // take a string as input
    string s;
    getline(cin, s);

    // we push the string s to stringstream ss
    stringstream ss(s);

    // declare word because we will get string from stringstream ss
    string word;

    // until the ss is empty we pull a word from ss
    while (ss >> word)
    {
        cout << word << endl; // output the word
    }

    return 0;
}