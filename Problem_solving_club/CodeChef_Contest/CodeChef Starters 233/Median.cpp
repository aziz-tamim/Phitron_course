// AUTHOR :- ABDUL AZIZ TAMIM
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n,m;
        cin >> n >> m;
        vector<int> a(n);

        for(int i=0; i<n; i++)
            cin >> a[i];
            
        sort(a.begin(), a.end());
        int x = n-m;
        int mid = (x -1)/2;
        set<int> med;

        for(int i=0; i+x-1<n; i++)
            med.insert(a[i+mid]);

        for(auto y : med)
            cout << y << sp;
        cout << nl;
    }
    return 0;
}