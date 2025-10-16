#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    deque<int> dq;
    bool rev = false;
    while(tc--)
    {
        string cmd;
        cin >> cmd;
        if(cmd == "push_back")
        {
            int n;
            cin >> n;
            if(rev == false)
                dq.push_back(n);
            else
                dq.push_front(n);
        }
        else if(cmd == "toFront")
        {
            int n;
            cin >> n;
            if(rev == false)
                dq.push_front(n);
            else
                dq.push_back(n);
        }
        else if(cmd == "front")
        {
            if(dq.empty())
                cout << "No job for Ada?" << '\n';
            else
            {
                if(rev == false)
                {
                    cout << dq.front() << "\n";
                    dq.pop_front();
                }
                else
                {
                    cout << dq.back() << "\n";
                    dq.pop_back();
                }
            }
        }
        else if(cmd == "back")
        {
            if(dq.empty())
                cout << "No job for Ada?" << '\n';
            else
            {
                if(rev == false)
                {
                    cout << dq.back() << "\n";
                    dq.pop_back();
                }
                else
                {
                    cout << dq.front() << "\n";
                    dq.pop_front();
                }
            }
        }
        else if(cmd == "reverse")
        {
            if(rev == false)
                rev = true;
            else
                rev = false;
        }
    }
    return 0;
}