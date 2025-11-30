#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int frq[26] = {0};
        for(char c : str) {
            frq[c - 'a']++;
        }

        bool poss = true;
        for(int i = 0; i < 26; i++) {
            if(frq[i] % 2 == 1) {
                poss = false;
                break;
            }
        }
        if(poss)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}



#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >>n;
        string str;
        cin >> str;

        vector<int> freq(26, 0);
        for(char c : str) 
            freq[c - 'a']++;

        bool poss = true;
        for(int x : freq) {
            if(x % 2 == 1)
            {
                poss = false;
                break;
            }
        }
        if(poss)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
