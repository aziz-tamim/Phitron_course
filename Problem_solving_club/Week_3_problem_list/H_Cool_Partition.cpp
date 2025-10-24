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
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++)
            cin >> arr[i];
     
        unordered_map<int,int> umap;
        for(int i=0; i<n; i++)
            umap[arr[i]] = i;
        int ans = 0;
        int mxlst = 0;
        for(int i=0; i<n; i++)
        {
            mxlst = max(mxlst, umap[arr[i]]);
            if(i == mxlst)
                ans ++;
        }
        cout << ans << "\n";
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        unordered_map<int,int> last;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            last[a[i]] = i; // last occurrence
        }

        int segments = 0;
        int maxRight = 0;
        int currentSegmentStart = 0;

        for(int i = 0; i < n; i++) {
            maxRight = max(maxRight, last[a[i]]);
            if(i == maxRight) {
                segments++;
                currentSegmentStart = i+1;
            }
        }

        cout << segments << "\n";
    }
    return 0;
}

