#include <bits/stdc++.h>
using namespace std;

// creating a Student class with class, roll, gpa
class Student
{
public:
    int cls;
    int roll;
    double gpa;

    // constructor
    Student(int cls, int roll, int gpa)
    {
        this->cls = cls;     // dereference
        (*this).roll = roll; // same as above dereference
        this->gpa = gpa;
    }
};
int main()
{
    // dynamic object
    Student *rakib = new Student(10, 37, 4.89);

    // output the value by dereferences
    cout << rakib->cls << " " << rakib->roll << " " << rakib->gpa << endl;
    return 0;
}