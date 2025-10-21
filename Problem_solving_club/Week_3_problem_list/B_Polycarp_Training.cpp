// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int n;
//     cin >> n;
//     int arr[1000001];
//     for(int i=0; i<n; i++)
//         cin >> arr[i];
//     sort(arr, arr+n);

//     int day = 0;
//     for(int i=0; i<n; i++)
//     {
//         if(arr[i] >= day+1)
//             day++;
//     }
//     cout << day << "\n";
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >>n;
    multiset<int> ml;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        ml.insert(x);
    }
    int ans = 0, problem = 1;
    while(!ml.empty())
    {
        auto LB = ml.lower_bound(problem);
        if(LB != ml.end())
        {
            ans++;
            ml.erase(LB);
        }
        else
            break;
        problem++;
    }
    cout << ans << "\n";
    return 0;
}