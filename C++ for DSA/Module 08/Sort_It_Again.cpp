#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int cls;
    char section;
    int id;
    int math_marks;
    int eng_marks;
};
bool cmp(Student m, Student e)
{
    if(m.eng_marks > e.eng_marks)
    {
        return true;
    }
    else if(m.eng_marks < e.eng_marks)
    {
        return false;
    }
    else if(m.math_marks > e.math_marks)
    {
        return true;
    }
    else if(m.math_marks < e.math_marks)
    {
        return false;
    }
    else
    {
        return m.id < e.id;
    }
}
int main()
{
    int n;
    cin >> n;
    Student arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i].name >> arr[i].cls >> arr[i].section >> arr[i].id >> arr[i].math_marks >> arr[i].eng_marks;   
    }
    sort(arr, arr+n, cmp);
    for(int i=0; i<n; i++)
    {
        cout << arr[i].name << " " << arr[i].cls << " " << arr[i].section << " " << arr[i].id << " " << arr[i].math_marks << " " << arr[i].eng_marks << endl;   
    }
    return 0;
}