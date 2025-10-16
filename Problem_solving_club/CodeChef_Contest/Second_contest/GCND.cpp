// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int tc;
//     cin >> tc;
//     for(int i=0; i<tc; i++)
//     {
//         int num;
//         cin >> num;
//         vector<int> arr(num);
//         for(int i=0; i<num; i++)
//             cin >> arr[i];
//         sort(arr.rbegin(),arr.rend());

//         int a = arr[0];
//         int b = arr[1];
//         int ans = 1;
//         for(int c = max(a,b)-1; c>=1; c--)
//         {
//             if(a%c!= 0 && b%c != 0)
//             {
//                 ans = c;
//                 break;
//             }
//         }
//         cout << ans << "\n";
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
            cin >> arr[i];

        int me = *max_element(arr.begin(), arr.end());
        int ans = 1;
        for(int z = me-1; z >= 1; z--)
        {
            int count = 0;
            for(int i = 0; i <n; i++)
            {
                if(arr[i] % z != 0)
                    count++;
                if(count >= 2)
                    break;
            }
            if(count >= 2)
            {
                ans = z;
                break;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}
