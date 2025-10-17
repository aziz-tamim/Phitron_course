#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        int n;
        string str;
        cin >> n >> str;
        int cnt1 = 0;
        int cnt2 = 0;
        for(auto x : str)
        {
            if(x == '0')
                cnt1++;
            else
                cnt2++;
        }

        int ansr = min(cnt1, cnt2);
        if(ansr % 2 == 1)
            cout << "Zlatan" << '\n';
        else
            cout << "Ramos" << "\n";
    }
}
