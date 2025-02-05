#include <bits/stdc++.h>
using namespace std;

// creating a Student class with name, roll, gpa
class Student
{
public:
    char name[100];
    int roll;
    double gpa;
};
int main()
{
    Student a; // creating a student using the class

    // string full line input
    cin.getline(a.name, 100);
    cin >> a.roll >> a.gpa;

    // output the value
    cout << a.name << " " << a.roll << " " << a.gpa << endl;
    return 0;
}