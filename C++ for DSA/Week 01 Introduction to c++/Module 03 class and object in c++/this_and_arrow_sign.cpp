#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa) // jokhon variable er name ta same hobe tokhon (this) usde korte hobe.
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
        // (*this).roll = roll;
        // (*this).cls = cls;
        // (*this).gpa = gpa;
    }
    // Student(int r, int c, double g)
    // {
    //     roll = r;
    //     cls = c;
    //     gpa = g;
    // }
};
int main()
{
    Student rahim(45,5,3.2);
    Student karim(2,5,5.0);

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;
    return 0;
}
