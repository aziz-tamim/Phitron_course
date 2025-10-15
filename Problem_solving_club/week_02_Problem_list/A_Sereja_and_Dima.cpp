// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0; i<n; i++)
//     {
//         cin >> arr[i];
//     }
//     int a = 0,b=0;
//     int left = 0;
//     int right = n-1;
//     bool some = true;
//     while(left<=right)
//     { 
//         if(arr[left] > arr[right])
//         {
//             if(some)
//                 a = a+arr[left];
//             else
//                 b = b+arr[left];
//             left++;
//         }   
//         else
//         {
//             if(some)
//                 a = a+arr[right];
//             else
//                 b = b+arr[right];
//             right--;
//         }
//         if(some)
//             some = false;
//         else
//             some = true;
//     }
//     cout << a << " " << b << "\n";
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    deque<int> dq(n);
    for(int i=0; i<n; i++)
    {
        cin >> dq[i];
    }
    int ans1 = 0, ans2 = 0, who = 1;
    while(!dq.empty())
    {
        int left = dq.front(), right = dq.back(), mx;
        mx = max(left, right);
        if(who % 2 != 0)
        {
            ans1 += mx;
        }
        else
        {
            ans2+= mx;
        }
        if(mx == left)
        {
            dq.pop_front();
        }
        else
        {
            dq.pop_back();
        }
        who++;
    }
    cout << ans1 << " " << ans2 << "\n";
    return 0;
}