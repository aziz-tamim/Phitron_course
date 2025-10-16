#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--)
    {
        int a,b,c;
        cin >> a >> b>> c;
        vector<int > arr(a);
        for(int i=0; i<a; i++)
            cin >> arr[i];
        sort(arr.rbegin(), arr.rend());

        for(int i=0; i<c && i<a; i++)
        {
            if(arr[i] > b)
            {
                arr[i] = 0;
                b = b+100;
            }
            else
                break;
        }
        int up = count_if(arr.begin(), arr.end(), [&](int score) {
            return score > b;
        });
        cout << up+ 1 << "\n";
    }
    return 0;
}

