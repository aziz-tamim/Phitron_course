#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        string pass;
        cin >> pass;
        string ok = "";
        int high = -1;

        for(char ch ='a'; ch <= 'z'; ch++)
        {
            for(int i=0; i<=pass.size(); i++)
            {
                string tmp = pass.substr(0,i) + ch+pass.substr(i);
                int tm = 2;
                for(int j=1; j<tmp.size(); j++)
                {
                    if(tmp[j] == tmp[j-1])
                        tm += 1;
                    else
                        tm += 2;
                }
                if(tm >high)
                {
                    high = tm;
                    ok = tmp;
                }
            }
        }
        cout << ok << "\n";
    }
    return 0;
}