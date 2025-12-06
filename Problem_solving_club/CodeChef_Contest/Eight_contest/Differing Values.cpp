#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, b;
        string st;
        cin >> a >> b >> st;
        vector<int> vc(b, 0);
        for (int i = 0; i < b; i++)
            vc[i] = (a - i + b - 1) / b;

        int low = count(st.begin(), st.end(), '0');
        int one = a - low;
        bool poss = true;
        for (int i = 0; i < b; i++)
        {
            int mx_cl = (vc[i] + 1) / 2;
            if (low > mx_cl)
                low -= mx_cl;
            else
                low = 0;
            if (one > mx_cl)
                one -= mx_cl;
            else
                one = 0;
        }

        if (low > 0 || one > 0)
            poss = false;
        if (poss)
            cout << "Yes" << "\n";
        else
            cout << "No" << "\n";
    }
}
