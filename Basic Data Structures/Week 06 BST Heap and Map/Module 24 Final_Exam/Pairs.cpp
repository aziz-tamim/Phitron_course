#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int> left, pair<string, int> right)
{
    if(left.first < right.first)
        return true;
    if(left.first > right.first)
        return false;

    if(left.second > right.second)
        return true;
    return false;
}

int main()
{
    // pair<string, int> a;
    vector<pair<string, int>> v;
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        string name;
        int num;
        cin >> name >> num;
        v.push_back({name, num});
    }
    sort(v.begin(), v.end(), cmp);
    
    for(int i=0; i<n; i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
    return 0;
}