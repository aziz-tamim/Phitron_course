// AUTHOR :- ABDUL AZIZ TAMIM (tamimaziz2007@gmail.com)
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
        int n;
        cin >> n;
        vector<int> arr(n);
        set<int> st;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            st.insert(arr[i]);
        }
        cout << st.size() << nl;
    }
    return 0;
}
