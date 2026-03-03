// AUTHOR :- ABDUL AZIZ TAMIM (tamimaziz2007@gmail.com)
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "
void print(int n)
{
    if(n == 0)
        return;
    print(n-1);
    cout << n << sp;
}
int main()
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    print(n);
    return 0;
}


// AUTHOR :- ABDUL AZIZ TAMIM
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
const int MOD = 1e9 + 7;

int S;
ll dp[2005];

ll f(int sum) {
    if(sum < 0) return 0;
    if(sum == 0) return 1;
    if(dp[sum] != -1) return dp[sum];
    
    ll ans = 0;
    for(int x = 3; x <= sum; x++) {
        ans = (ans + f(sum - x)) % MOD;
    }
    return dp[sum] = ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> S;
    memset(dp, -1, sizeof(dp));
    cout << f(S) << nl;

    return 0;
}