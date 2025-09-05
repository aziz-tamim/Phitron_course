#include<bits/stdc++.h>
using namespace std;
class Edge {
public:
    int a,b;
    long long c;
    Edge(int a, int b, long long c) {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};
long long dis[1005];
vector<Edge> edge_list;
int n,e;
bool bellman_ford(int src)
{
    for(int i=1; i<=n; i++)
        dis[i] = LLONG_MAX;
    dis[src] = 0;

    for(int i=1; i<=n-1; i++)
    {
        for(auto ed : edge_list)
        {
            int a,b;
            long long c;
            a = ed.a;
            b = ed.b;
            c = ed.c;
            if(dis[a] != LLONG_MAX && dis[a] + c < dis[b])
                dis[b] = dis[a] + c;
        }
    }

    for(auto ed : edge_list)
    {
        int a,b;
        long long c;
        a = ed.a;
        b = ed.b;
        c = ed.c;
        if(dis[a] != LLONG_MAX && dis[a]+c<dis[b])
        {
            return true;
        }
    }
    return false;
}
int main()
{
    cin >> n >> e;
    while(e--)
    {
        int a,b;
        long long c;
        cin >> a >> b >> c;
        edge_list.push_back(Edge(a,b,c));
    }
    int s,t;
    cin >> s >> t;
    bool cycle = bellman_ford(s);
    
    if(cycle)
    {
        cout << "Negative Cycle Detected" << endl;
        return 0;
    }

    while(t--)
    {
        int dst;
        cin >> dst;
        if(dis[dst] == LLONG_MAX)
            cout << "Not Possible" << endl;
        else
            cout << dis[dst] << endl;
    }
    return 0;
}

