#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[15][15];
int maximum_path(int i, int j)
{
    if(i >= n || j>=m)
        return INT_MIN;
    if(i == n-1 && j == m-1)
        return a[i][j];

    int right = maximum_path(i,j+1);
    int down = maximum_path(i+1,j);
    return a[i][j] + max(right,down);
}
int main()
{
    cin >> n >> m;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin >> a[i][j];
    cout << maximum_path(0,0) << endl;
    return 0;
}