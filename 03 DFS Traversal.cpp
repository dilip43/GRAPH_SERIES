#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int> adj[], int vis[], vector<int> &ls)
{
    vis[node] = 1;
    ls.push_back(node);
    // Traverse all its neighbours
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            dfs(it, adj, vis, ls);
        }
    }
}

vector<int> dfsOfGraph(int V, vector<int> adj[])
{
    int vis[V] = {0};
    vis[0] = 1;
    vector<int> ls;
    int start = 0;
    dfs(start, adj, vis, ls);
    return ls;
}

// S.C. -> o(N) + O(N) = O(N)
// T.C. -> O(N) + O(2E)