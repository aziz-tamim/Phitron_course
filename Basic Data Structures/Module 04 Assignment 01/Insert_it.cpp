#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i]; 
    }

    int m;
    cin >> m;
    vector<int> a2(m);
    for(int j=0; j<m; j++)
    {
        cin >> a2[j];
    }

    int s;
    cin >> s;
    a.insert(a.begin()+s, a2.begin(),a2.end());

    for(int x : a)
    {
        cout << x << " ";
    }
    return 0;
}
