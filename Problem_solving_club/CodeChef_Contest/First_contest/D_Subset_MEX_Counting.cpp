#include<bits/stdc++.h>
using namespace std;
int last(vector<int>&v)
{
    set<int> s(v.begin(),v.end());
    int k = 0;
    while (s.count(k))
    {
        k++;
    }
    return k;
    
}
void subsequence(vector<int> &arr, int j, set<int>&s, int first = 0, vector<int> now = {})
{
    if(now.size() == j)
    {
        s.insert(last(now));
        return;
    }
    for(int i=first; i<arr.size(); i++)
    {
        now.push_back(arr[i]);
        subsequence(arr,j,s,i+1,now);
        now.pop_back();
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int num;
        cin >> num;

        vector<int> arr(num);
        for(int i=0; i<num;i++)
        {
            arr[i] = i%num;
        }
        for(int j = 1; j<=num; j++)
        {
            set<int> s;
            subsequence(arr,j,s);
            cout << s.size() << " ";
        }
        cout << "\n";
    }
    
    return 0;
}

