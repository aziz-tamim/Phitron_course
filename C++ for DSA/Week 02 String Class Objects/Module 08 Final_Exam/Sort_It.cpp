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
    int mtotal = m.math_marks + m.eng_marks;
    int etotal = e.math_marks + e.eng_marks;
    if(mtotal != etotal)
    {
        return mtotal > etotal;
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