#include <bits/stdc++.h>
using namespace std;

// T.C. -> O(N*M) , S.C. -> O(N*M)

void dfs(int row, int col, vector<vector<int>> &ans, vector<vector<int>> &image, int newColor, int delRow[], int delCol[])
{
	ans[row][col] = newColor;
	int n = image.size();
	int m = image[0].size();
	for (int i = 0; i < 4; i++)
	{
		int nRow = row + delRow[i];
		int nCol = col + delCol[i];
		if (nrow >= 0 && nrow < n and ncol >= 0 and ncol < m && images[nrow][ncol] == iniColor && ans[nrow][ncol] != newColor)
		{
			dfs(nrow, ncol, ans, image, newColor, delRow, delCol);
		}
	}
}

vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor)
{
	int iniColor = image[sr][sc];
	vector<vector<int>> ans = image;
	int delRow[] = {-1, 0, +1, 0};
	int delCol[] = {0, +1, 0, -1};
	dfs(sr, sc, ans, image, newColor, delRow, delCol);
	return ans;
}