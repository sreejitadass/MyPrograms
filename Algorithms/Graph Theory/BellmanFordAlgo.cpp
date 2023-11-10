#include <bits/stdc++.h>
using namespace std;

vector<int> findSSSP_bellmanFord(int src, int n, vector<vector<int>> &edges)
{
    vector<int> dist(n);
    for (int i = 0; i < n; i++)
        dist[i] = 1e8;
    dist[src] = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        for (auto itr : edges)
        {
            int u = itr[0];
            int v = itr[1];
            int w = itr[2];

            // relaxation of edges,reports 1e8 for negative weight cycle
            if (dist[u] + w < dist[v] && dist[u] != 1e8)
            {
                dist[v] = dist[u] + w;
            }
        }
    }

    // n-th relaxation to check negative weight cycle
    for (int i = 0; i < n - 1; i++)
    {
        for (auto itr : edges)
        {
            int u = itr[0];
            int v = itr[1];
            int w = itr[2];

            if (dist[u] + w < dist[v] && dist[u] != 1e8)
            {
                return {-1};
            }
        }
    }
    return dist;
}

int main()
{
    vector<vector<int>> edges;
    int n, u, v, w, src;
    cout << "Enter number of nodes: ";
    cin >> n;
    cout << "Enter the source node: ";
    cin >> src;

    for (int i = 0; i < n; i++)
    {
        cout << endl;
        cout << "Enter the starting node: ";
        cin >> u;
        cout << "Enter the ending node: ";
        cin >> v;
        cout << "Enter the edge weight: ";
        cin >> w;

        edges.push_back({u, v, w});
    }

    vector<int> dist = findSSSP_bellmanFord(src, n, edges);
    cout << "\nShortest paths are: " << endl;
    for (int i = 0; i < dist.size(); i++)
    {
        if (dist[i] == -1)
        {
            cout << "Negative cycle detected" << endl;
            break;
        }
        cout << src << " to " << i << " = " << dist[i] << endl;
    }
    return 0;
}