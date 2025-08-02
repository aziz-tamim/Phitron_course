#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    char section;
    int math_marks;
    int cls;

    Student(string name, int roll, char section, int math_marks, int cls)
    {
        this->name = name;
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};
int main()
{
    Student salman("Salman", 1, 'A', 80, 8);  
    Student tamim("Tamim", 1, 'B', 90, 8);  
    Student aziz("Aziz", 1, 'B', 95, 8);
    if(salman.math_marks>tamim.math_marks && salman.math_marks>aziz.math_marks)
    {
        cout << salman.name << endl;
    }
    else if(tamim.math_marks > salman.math_marks && tamim.math_marks > aziz.math_marks)
    {
        cout << tamim.name << endl;
    }
    else
    {
        cout << aziz.name << endl;
    }
    return 0;
}