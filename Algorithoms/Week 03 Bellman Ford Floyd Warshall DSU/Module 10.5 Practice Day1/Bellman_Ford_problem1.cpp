// problem link --> https://www.geeksforgeeks.org/problems/distance-from-the-source-bellman-ford-algorithm/1
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) {
        vector<int> dis(V, 1e8);
        dis[src] = 0;
        for(int i=0; i<V-1; i++)
        {
            for(auto ed : edges)
            {
                int a, b,c;
                a = ed[0];
                b = ed[1];
                c = ed[2];
                if(dis[a] != 1e8 && dis[a] + c < dis[b])
                    dis[b] = dis[a]+c;
            }
        }
        for(auto ed : edges)
        {
            int a,b,c;
            a = ed[0];
            b = ed[1];
            c = ed[2];
            
            if(dis[a] != 1e8 && dis[a] + c < dis[b])
                return {-1};
        }
        return dis;
    }
};
int main()
{
    int n,e,src;
    cin >> n >> e;
    vector<vector<int>> edges(e, vector<int>(3));
    for(int i=0; i<e; i++)
        cin >> edges[i][0] >> edges[i][1] >> edges[i][2];
    cin >> src;
    Solution obj;
    vector<int> ans = obj.bellmanFord(n, edges, src);
    for(int x : ans)
        cout << x << " ";
    cout << "\n";
    return 0;
}
