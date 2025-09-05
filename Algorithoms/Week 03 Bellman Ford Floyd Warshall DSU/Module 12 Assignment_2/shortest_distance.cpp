#include<bits/stdc++.h>
using namespace std;

class Edge
{
    public:
        int a,b;
        long long c;
        Edge(int a, int b, long long c)
        {
            this->a = a;
            this->b = b;
            this->c = c;
        }
};
long long dis[1005][1005];
vector<Edge> edge_list;
int n,e;

void bellman_ford(int src)
{
    for(int i=1; i<=n; i++)
        dis[src][i] = LLONG_MAX;
    dis[src][src] = 0;

    for(int i=1; i<=n-1; i++)
    {
        for(auto ed : edge_list)
        {
            int a,b;
            long long c;
            a = ed.a;
            b = ed.b;
            c = ed.c;
            if(dis[src][a] != LLONG_MAX && dis[src][a]+c < dis[src][b])
                dis[src][b] = dis[src][a] +c;
        }
    }
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

    int i = 1;
    while(i<=n)
    {
        bellman_ford(i);
        i++;
    }

    int q;
    cin >> q;
    while(q--)
    {
        int source, distination;
        cin >> source >> distination;
        if(dis[source][distination] == LLONG_MAX)
            cout << -1 << endl;
        else
            cout << dis[source][distination] << endl;
    }
    return 0;
}