#include <bits/stdc++.h>
using namespace std;

// S.C. -> O(N^2)+O(N^2), T.C. -> O(N^2)

void bfs(int row, int col, vector<vector<char>> &vis, vector<vector<char>> &grid)
{
    vis[row][col] = 1;
    queue<pair<int, int>> q;
    q.push({row, col});
    int n = grid.size();
    int m = grid[0].size();

    while (!q.empty())
    {
        int row = q.front().first;
        int col = q.front().second;
        q.pop();

        // traverse in the neighbour and mark them if its a land
        for (int delrow = -1; delrow <= 1; delrow++)
        {
            for (int delcol = -1; delcol <= 1; delcol++)
            {
                int nrow = row + delrow;
                int ncol = col + delcol;
                if (nrow >= 0 and nrow < n and ncol >= 0 and ncol <= m and grid[nrow][ncol] == '1' and !vis[nrow][ncol])
                {
                    vis[nrow][ncol] = 1;
                    q.push({nrow, ncol});
                }
            }
        }
    }
}

int numIslands(vector<vector<char>> &grid)
{
    int n = grid.size();
    int m = grid[0].size();

    vector<vector<int>> vis(n, vector<int>(m, 0));
    int cnt = 0;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < m; col++)
        {
            if (!vis[row][col] and grid[row][col] == '1')
            {
                cnt++;
                bfs(row, col, vis, grid);
            }
        }
    }
    return cnt;
}
