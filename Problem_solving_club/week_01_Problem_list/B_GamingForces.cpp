#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i=0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end());

        int mon1 = count(v.begin(), v.end(),1);
        int imp = n - mon1/2;
        
        cout << imp << "\n";
    }
    return 0;
}
