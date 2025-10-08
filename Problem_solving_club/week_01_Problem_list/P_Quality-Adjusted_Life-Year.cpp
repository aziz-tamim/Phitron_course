#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    double qua = 0.0;
    for(int i=0; i<n; i++)
    {
        double quality, time;
        cin >> quality >> time;
        qua = qua + quality * time;
    }
    cout << fixed << setprecision(3) << qua << "\n";
    return 0;
}
