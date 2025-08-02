#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int id;
    string name;
    char section;
    int total_marks;
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Student topper;
        for(int i=0; i<3; i++)
        {
            Student tem;
            cin >> tem.id >> tem.name >> tem.section >> tem.total_marks;
            if(i==0)
            {
                topper = tem;
            }
            else
            {
                if(tem.total_marks > topper.total_marks)
                {
                    topper = tem;
                }
                else if(tem.total_marks == topper.total_marks)
                {
                    if(tem.id < topper.id)
                    {
                        topper = tem;
                    }
                }
            }
        }
        cout << topper.id << " " << topper.name << " " << topper.section << " " << topper.total_marks << endl;
    }
    return 0;
}