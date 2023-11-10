//?

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void BFS(int i, int j, int n, int m, vector<vector<int>> &grid, vector<vector<int>> &visited)
{
    visited[i][j] = 1;
    queue<pair<int, int>> q;
    q.push({i, j});
    int nRow, nCol;

    while (!q.empty())
    {
        int row = q.front().first;
        int col = q.front().second;
        q.pop();

        for (int delrow = -1; delrow <= 1; delrow++)
        {
            for (int delcol = -1; delcol <= 1; delcol++)
            {
                nRow = row + delrow;
                nCol = col + delcol;
            }
        }
        if (nRow >= 0 && nRow < n && nCol >= 0 && nCol < m && grid[nRow][nCol] == 1 && !visited[nRow][nCol])
        {
            q.push({nRow, nCol});
            visited[nRow][nCol] = 1;
        }
    }
}

int findIslands(int n, int m, vector<vector<int>> &grid, vector<vector<int>> &visited)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!visited[i][j] && grid[i][j] == 1)
            {
                count++;
                BFS(i, j, n, m, grid, visited);
            }
        }
    }
    return count;
}

int main()
{
    vector<vector<int>> grid = {{0, 1, 1, 0}, {0, 1, 1, 0}, {0, 0, 1, 0}, {0, 0, 0, 0}, {1, 1, 0, 1}};
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<int>> visited(n, vector<int>(m, 0));

    cout << "Total number of islands is: " << findIslands(n, m, grid, visited) << endl;
    return 0;
}