// Graph can be represent in Two ways: 1) Matrix , 2) List

// 1) Matrix or Adjacency Matrix

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    // Graph here

    int adj[n + 1][n + 1];
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }
    return 0;
}

// 2) Adjacency List
// S.C. O(2E) - E -> no of edges

int main()
{
    int n, m;
    cin >> n >> m;

    // Graph here

    vector<int> adj[n + 1];
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    return 0;
}

// Now Store Weighted Graph here

int main()
{
    int n, m;
    cin >> n >> m;

    // Graph here

    vector<pair<int, int>> adj[n + 1];
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
    return 0;
}
