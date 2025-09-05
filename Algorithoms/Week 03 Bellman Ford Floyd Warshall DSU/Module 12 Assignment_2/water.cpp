#include<bits/stdc++.h>
using namespace std;
class Edge
{
    public:
        int index;
        long long height;
        Edge(int index, long long height)
        {
            this->index = index;
            this->height = height;
        }
};
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<Edge> edge_list;
        for(int i=0; i<n; i++)
        {
            long long hei;
            cin >> hei;
            edge_list.push_back(Edge(i,hei));
        }

        int left = 0;
        int right = n-1;
        int mxleft = 0;
        int mxright = n-1;
        long long mxheight = 0;

        while(left < right)
        {
            long long hei = min(edge_list[left].height, edge_list[right].height);
            if(hei > mxheight)
            {
                mxheight = hei;
                mxleft = edge_list[left].index;
                mxright = edge_list[right].index;
            }
            if(edge_list[left].height < edge_list[right].height)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        cout << mxleft << " " << mxright << endl;
    }
    return 0;
}