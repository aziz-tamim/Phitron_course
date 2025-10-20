#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    multiset<int> ml;
    for(int i=1; i<=n; i++)
    {
        int x;
        cin >> x;
        ml.insert(x);
    }
    // for(auto value : ml)
    //     cout << value << " ";
    // cout << "\n";

    // auto it = ml.find(2);
    // if(it != ml.end())
    //     cout << "Found" << "\n";
    // else
    //     cout << "Not Found" << '\n';

    ml.erase(6);
    for(auto value : ml)
        cout << value << " ";
    cout << "\n";

    // cout << ml.count(9) << "\n";

    // int N;
    // cin >> N;
    // auto it = ml.lower_bound(N);
    // if(it == ml.end())
    //     cout << "End" << "\n";
    // else
    //     cout << *it << "\n";


    int N;
    cin >> N;
    auto it = ml.upper_bound(N);
    ml.erase(it);
    if(it == ml.end())
        cout << "End" << "\n";
    else
        cout << *it << "\n";
    
    for(auto value : ml)
        cout << value << " ";
    cout << '\n';
    return 0;
}