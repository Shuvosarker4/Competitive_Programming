#include <bits/stdc++.h>
using namespace std;
int main()
{
    // list<type> name;

    // list declare
    list<int> mylist;

    // list initialize with value
    list<int> my_list = {1, 2, 3, 4, 5};

    // 5 elements with garbage value
    list<int> gar_bage(5);

    // size with initialize
    list<int> s(10, 5);

    // vector to list copy
    vector<int> v = {100, 200, 300};
    list<int> mylist(v.begin(), v.end());

    // print a list
    for (auto it = mylist.begin(); it != mylist.end(); it++)
    {
        cout << *it << endl;
    }

    for (int val : mylist)
    {
        cout << val << endl;
    }

    /*

        <-----List Capacity Function---->

    */

    list<int> item = {10, 20, 30};

    // max size of the list
    item.max_size();

    // clear the list not from memory
    item.clear();
    item.empty(); // return true/false

    // resize the list
    item.resize(5);

    // resize the list with initialize value 100
    item.resize(57, 100);

    // get size of the list
    item.size();

    /*

       <-----List Modifiers Function---->

   */

    list<int> newItem = {10, 20, 30, 40};

    // delete the last item of the list
    newItem.pop_back();

    // delete the first item
    newItem.pop_front();

    // insert from the 3rd item in the list which is 100
    newItem.insert(next(newItem.begin(), 3), 100);
    newItem.insert(next(newItem.begin(), 3), v.begin(), v.end());

    // insert at the end
    newItem.push_back(50);

    // insert at the start
    newItem.push_front(5);

    // erase some item from list
    newItem.erase(next(newItem.begin(), 2));

    // replace 30 by 100
    replace(newItem.begin(), newItem.end(), 30, 100);

    // find item from the list
    auto it = find(newItem.begin(), newItem.end(), 30);
    if (it == newItem.end())
    {
        cout << "Not Found";
    }
    else
    {
        cout << "Found";
    }

    /*

       <-----Element Access---->

   */

    // access last element of the list
    mylist.back();

    // access first element of the list
    mylist.front();

    // access 3rd position item from the list
    cout << *next(mylist.begin(), 3) << endl;

    /*

       <-----List Operation Function---->

   */

    // remove item
    mylist.remove(10);

    // sort the list
    mylist.sort();               // ascending order
    mylist.sort(greater<int>()); // descending order

    // get unique value or remove duplicate
    // before unique you need to sort it
    mylist.unique();

    // reverse the list
    mylist.reverse();
    return 0;
}