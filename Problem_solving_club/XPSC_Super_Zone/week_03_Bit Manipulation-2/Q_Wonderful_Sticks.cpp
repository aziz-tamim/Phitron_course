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
        string s;
        cin >> s;
        vector<int> arr(n);
        int sm = 1;
        int lg = n;
        for(int i=n-1; i>0; i--)
        {
            if(s[i-1] == '<')
                arr[i] = sm++;
            else
                arr[i] = lg--;
        }
        arr[0] = sm;
        for(int i=0; i<n; i++)
            cout << arr[i] << sp;
        cout << nl;
    }
    return 0;
}
