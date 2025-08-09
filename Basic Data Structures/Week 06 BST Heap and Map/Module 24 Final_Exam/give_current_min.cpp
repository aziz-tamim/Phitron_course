#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }

    priority_queue<int, vector<int>, greater<int>> curr_min(v.begin(), v.end());

    int q;
    cin >> q;
    while(q--)
    {
        int cmd;
        cin >> cmd;
        if(cmd == 0)
        {
            int x;
            cin >> x;
            curr_min.push(x);
            cout << curr_min.top() << endl;
        }
        else if(cmd == 1)
        {
            if(curr_min.empty())
                cout << "Empty" << endl;
            else
                cout << curr_min.top() << endl;
        }
        else if(cmd == 2)
        {
            if(curr_min.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                curr_min.pop();
                if(curr_min.empty())
                {
                    cout << "Empty" << endl;
                }
                else
                {
                    cout << curr_min.top() << endl;
                }
            }
        }
    }
    return 0;
}