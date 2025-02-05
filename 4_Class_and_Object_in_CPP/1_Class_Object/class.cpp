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

    // initializing value
    a.roll = 29;
    a.gpa = 4.88;
    char tmp[100] = "Shuvo";

    // using strcpy built in func
    strcpy(a.name, tmp);

    // output the value
    cout << a.name << " " << a.roll << " " << a.gpa << endl;
    return 0;
}