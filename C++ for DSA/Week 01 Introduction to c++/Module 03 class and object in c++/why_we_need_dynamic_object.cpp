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
Student* fun()
{
    Student karim(2,5,5.0);
    Student* p = &karim;
    return p;
}
int main()
{
    Student* p = fun();
    cout << p->roll << " " << p->cls << " " << p->gpa << endl;
    return 0;
}
