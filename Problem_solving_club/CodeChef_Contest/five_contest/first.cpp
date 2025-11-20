#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while(tc--){
        int num;
        cin >> num;
        vector<int> arr(num);

        int c1 = 0, c2 = 0, c3 = 0;

        for(int i = 0; i < num; i++)
        {
            cin >> arr[i];
            if(arr[i] == 1)
                c1++;
            else if(arr[i] == 2)
                c2++;
            else
                c3++;
        }

        int dele = 0;
        dele += min(c1, c3);
        if(c2 > 1) dele += (c2 - 1);

        cout << dele << "\n";
    }
}
