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
    }
};
Student fun()
{
    Student karim(2,5,5.0);
    return karim;
}
int main()
{
    Student obj = fun();
    cout << obj.roll << " " << obj.cls << " " << obj.gpa << endl;
    return 0;
}
