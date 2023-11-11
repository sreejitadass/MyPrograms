#include <bits/stdc++.h>
using namespace std;

int findShortestPath(vector<vector<int>> &grid, vector<vector<int>> &dist, pair<int, int> &src, pair<int, int> &dest)
{
    dist[src.first][src.second] = 0;
    queue<pair<int, pair<int, int>>> q;
    //{dis,{x-coord,y-coord}}
    q.push({0, {src.first, src.second}});

    int n = grid.size();
    int m = grid[0].size();

    int delrow[] = {-1, 0, 1, 0};
    int delcol[] = {0, 1, 0, -1};

    while (!q.empty())
    {
        auto it = q.front();
        q.pop();
        int dis = it.first;
        int r = it.second.first;
        int c = it.second.second;

        for (int i = 0; i < n; i++)
        {
            int nRow = r + delrow[i];
            int nCol = c + delcol[i];

            if (nRow >= 0 && nRow < n && nCol >= 0 && nCol < m && grid[nRow][nCol] == 1 && dis + 1 < dist[nRow][nCol])
            {
                dist[nRow][nCol] = 1 + dis;

                // when we reach destination
                if (nRow == dest.first && nCol == dest.second)
                {
                    return 1 + dis;
                }
                q.push({1 + dis, {nRow, nCol}});
            }
        }
    }
    return -1;
}

int main()
{
    vector<vector<int>> grid = {{1, 1, 1, 1},
                                {1, 1, 0, 1},
                                {1, 1, 1, 1},
                                {1, 1, 0, 0},
                                {1, 0, 0, 0}};
    vector<vector<int>> dist(grid.size(), vector<int>(grid[0].size(), 1e9));
    pair<int, int> src = {0, 1};
    pair<int, int> dest = {2, 2};

    cout << "\nThe required shortest path length is: " << findShortestPath(grid, dist, src, dest) << endl;
    return 0;
}