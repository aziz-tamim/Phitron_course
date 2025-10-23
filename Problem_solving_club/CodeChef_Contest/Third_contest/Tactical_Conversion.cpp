#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Tc;
    cin >> Tc;
    while(Tc--)
    {
        int N;
        string S;
        cin >> N >> S;
        bool possible = true;
        int lastOp = -2;
        for(int i = 0; i < N; i++)
        {
            if(S[i] == '1') {
                if(i - lastOp > 1)
                {
                    lastOp = i;
                }
                else {
                    possible = false;
                    break;
                }
            }
        }
        cout << (possible ? "Yes\n" : "No\n");
    }
    return 0;
}
