#include <bits/stdc++.h>
using namespace std;

vector<int> displayShortestPath(int n, vector<vector<int>> &edges)
{
    vector<pair<int, int>> adjList[n + 1];

    // convert to adjacency list
    for (auto it : edges)
    {
        // node-->{adjnode,wt}
        adjList[it[0]].push_back({it[1], it[2]});
        adjList[it[1]].push_back({it[0], it[2]});
    }
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, 1}); //{dist,node}

    vector<int> dist(n + 1, 1e9);
    dist[1] = 0;
    vector<int> parent(n + 1);
    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
    }

    while (!pq.empty())
    {
        auto it = pq.top();
        pq.pop();
        int node = it.second;
        int dis = it.first;

        for (auto it : adjList[node])
        {
            int adjNode = it.first;
            int weight = it.second;

            if (dis + weight < dist[adjNode])
            {
                dist[adjNode] = dis + weight;
                pq.push({dis + weight, adjNode});
                parent[adjNode] = node;
            }
        }
    }

    if (dist[n] == 1e9)
    {
        return {-1};
    }
    vector<int> shortestPath;

    int node = n;
    while (parent[node] != node)
    {
        shortestPath.push_back(node);
        node = parent[node];
    }
    shortestPath.push_back(1);

    reverse(shortestPath.begin(), shortestPath.end());
    return shortestPath;
}

int main()
{
    int m, n, u, v, w;
    cout << "Enter number of edges: ";
    cin >> m;
    cout << "Enter number of vertices: ";
    cin >> n;
    vector<vector<int>> edges;
    for (int i = 0; i < m; i++)
    {
        cout << "\nEnter starting node: ";
        cin >> u;
        cout << "Enter ending node: ";
        cin >> v;
        cout << "Enter weight: ";
        cin >> w;

        edges.push_back({u, v, w});
    }

    vector<int> shortestPath = displayShortestPath(n, edges);

    cout << "\nThe shortest path from 1 to " << n << " is: ";
    for (int x : shortestPath)
        cout << x << " ";
    cout << endl;
}