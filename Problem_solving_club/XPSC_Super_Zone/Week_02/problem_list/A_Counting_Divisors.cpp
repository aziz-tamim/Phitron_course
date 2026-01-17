// #include<bits/stdc++.h>
// using namespace std;
// const int maxN = 30+9;
// vector<int> divisors(maxN);
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     for(int i=1; i<maxN; i++)
//     {
//         for(int j=i; j<maxN; j+=i)
//         {
//             divisors[j]++;
//         }
//     }
//     for(int i=1; i<=30; i++)
//     {
//         cout << i << " -> " << divisors[i] << "\n";
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
const int maxN = 1e6+9;
vector<int> divisors(maxN);
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    for(int i=1; i<maxN; i++)
    {
        for(int j=i; j<maxN; j+=i)
        {
            divisors[j]++;
        }
    }
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        cout << divisors[n] << '\n';
    }
    return 0;
}