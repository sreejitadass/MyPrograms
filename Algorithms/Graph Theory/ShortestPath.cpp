#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void storeGraph(int m, int n, vector<int> adjList[])
{
    int u, v;
    for (int i = 0; i < m; i++)
    {
        cout << "\nFor edge " << (i + 1) << ": " << endl;
        cout << "Enter starting node: ";
        cin >> u;
        cout << "Enter ending node: ";
        cin >> v;

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
}

vector<int> shortestPath(int src, int n, vector<int> adjList[])
{
    int dist[n]; // 0-based indexing
    for (int i = 0; i < n; i++)
        dist[i] = 1e9;
    dist[src] = 0;

    queue<int> q;
    q.push(src);
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (auto itr : adjList[v])
        {
            if (dist[v] + 1 < dist[itr])
            {
                dist[itr] = 1 + dist[v];
                q.push(itr);
            }
        }
    }
    vector<int> result(n, -1);
    for (int i = 0; i < n; i++)
    {
        if (dist[i] != 1e9)
            result[i] = dist[i];
    }
    return result;
}

int main()
{
    int m, n, src, dest;
    cout << "Enter number of nodes: ";
    cin >> n;
    cout << "Enter number of edges: ";
    cin >> m;

    vector<int> adjList[n];
    storeGraph(m, n, adjList);

    cout << "\nEnter source node: ";
    cin >> src;
    cout << "Enter destination node: ";
    cin >> dest;

    vector<int> result = shortestPath(src, n, adjList);
    cout << "\nThe shortest path between " << src << " and " << dest << " is = " << result[dest] << endl;

    return 0;
}