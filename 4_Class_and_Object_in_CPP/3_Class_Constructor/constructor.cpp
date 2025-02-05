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
    // create rakib by passing value to the constructor
    Student rakib(10, 37, 4.89);

    // output the value
    cout << rakib.cls << " " << rakib.roll << " " << rakib.gpa << endl;
    return 0;
}