// TLE Ashse ei program ta te.
#include <bits/stdc++.h>
using namespace std;
int dfs(vector<vector<int>> grid, int lastR, int lastC, bool aliceTurn)
{
    int maxSto = -1;
    bool mvpos = false;
    for(int r=0; r<2; r++)
    {
        for(int c = 0; c < 2; c++)
        {
            if(grid[r][c] > 0 &&(lastR == -1||r == lastR || c == lastC))
            {
                mvpos = true;
                grid[r][c]--;
                int result = dfs(grid, r, c, !aliceTurn);
                grid[r][c]++;
                if (aliceTurn)
                {
                    if(result > maxSto)
                        maxSto = result;
                }
                else
                {
                    if(maxSto == -1 ||result < maxSto)
                        maxSto = result;
                }
            }
        }
    }
    if(!mvpos)
    {
        int reman = 0;
        for(auto &row : grid)
            for(int x : row)
                reman += x;
        return reman;
    }
    return maxSto;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    for(int i=0; i<tc; i++)
    {
        vector<vector<int>> grid(2, vector<int>(2));
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                cin >> grid[i][j];

        int ans = dfs(grid,-1,-1, true);
        cout << ans << "\n";
    }
    return 0;
}
