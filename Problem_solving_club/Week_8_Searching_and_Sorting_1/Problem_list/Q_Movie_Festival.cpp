#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<int,int>> movies(n);
    for(int i = 0; i < n; i++)
    {
        int start, end;
        cin >> start >> end;
        movies[i] = {start, end};
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(movies[i].second > movies[j].second)
                swap(movies[i], movies[j]);
        }
    }

    int last_end = 0;
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        int start = movies[i].first;
        int end = movies[i].second;
        if(start >= last_end)
        {
            count++;
            last_end = end;
        }
    }
    cout << count << "\n";
    return 0;
}
