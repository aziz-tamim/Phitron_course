#include <bits/stdc++.h>
using namespace std;
bool matchTemplate(const vector<long long> &arr, const string &s)
{
    unordered_map<long long, char> numchar;
    unordered_map<char,long long> charnum;

    for(int i=0; i<arr.size(); i++)
    {
        long long x = arr[i];
        char c = s[i];
        if(numchar.count(x) && numchar[x] !=c)
            return false;
        if(charnum.count(c) && charnum[c]!=x)
            return false;
        numchar[x] = c;
        charnum[c] = x;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    for(int i=0; i<tc; i++)
    {
        int num;
        cin >> num;
        vector<long long> arr(num);
        for(int i=0; i<num; i++)
            cin >> arr[i];
        int m;
        cin >> m;
        for(int i=0; i<m; i++)
        {
            string s;
            cin >> s;
            if(s.size() != num)
            {
                cout << "NO" << '\n';
                continue;
            }
            if(matchTemplate(arr,s))
                cout << "YES" << "\n";
            else
                cout << "NO" << "\n";
        }
    }
}
