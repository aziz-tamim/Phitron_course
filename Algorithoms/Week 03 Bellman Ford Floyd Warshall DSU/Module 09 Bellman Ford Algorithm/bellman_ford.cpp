#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int a, b, c;
    Edge(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};
int dis[1005];
vector<Edge> edge_list;
int n, e;
void bellman_ford()
{
    for(int i=0; i<n-1; i++)
    {
        for(auto ed : edge_list)
        {
            int a,b,c;
            a = ed.a;
            b = ed.b;
            c = ed.c;
            if(dis[a] != INT_MAX && dis[a] + c < dis[b])
                dis[b] = dis[a] + c;
        }
    }

    bool cycle = false;
    for(auto ed : edge_list)
    {
        int a, b, c;
        a = ed.a;
        b = ed.b;
        c = ed.c;
        if(dis[a] != INT_MAX && dis[a]+c<dis[b])
        {
            cycle = true;
            break;
        }
    }
    if(cycle)
        cout << "Negative Cycle detected" << endl;
    else
    {
        for(int i = 0; i < n; i++)
            cout << i << " -> " << dis[i] << endl;
    }
    // cout << "No negative weighted Cycle" << endl;
}

int main()
{
    cin >> n >> e;
    while(e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        edge_list.push_back(Edge(a, b, c));
    }
    for (int i=0; i<n; i++)
        dis[i] = INT_MAX;
    dis[0] = 0;
    bellman_ford();
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    if (x < 0)
    {
        cout << "false";
        return 0;
    }
    vector<int> digit;
    int temp = x;
    while (temp>0)
    {
        digit.push_back(temp % 10);
        temp /= 10;
    }
    int left = 0;
    int right = digit.size()-1;
    bool isPal = true;

    while (left < right)
    {
        if (digit[left] != digit[right])
        {
            isPal = false;
            break;
        }
        left++;
        right--;
    }

    if(isPal)
        cout << "true";
    else
        cout << "false";
    return 0;
}
