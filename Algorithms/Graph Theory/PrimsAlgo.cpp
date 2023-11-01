#include <bits/stdc++.h>
using namespace std;

void storeGraph(int m, int n, vector<pair<int, int>> adjList[])
{
    int u, v, w;
    for (int i = 0; i < m; i++)
    {
        cout << "\nFor edge " << (i + 1) << ": " << endl;
        cout << "Enter starting node: ";
        cin >> u;
        cout << "Enter ending node: ";
        cin >> v;
        cout << "Enter edge weight: ";
        cin >> w;

        adjList[u].push_back({v, w});
        adjList[v].push_back({u, w});
    }
}

vector<pair<int, int>> findMST(vector<int> &visited, vector<pair<int, int>> adjList[])
{
    priority_queue<pair<int, int>,
                   vector<pair<int, int>>, greater<pair<int, int>>>
        pq;
    int sum = 0;
    pq.push({0, 0});

    vector<pair<int, int>> mstEdges; // To store the MST edges and their weights.

    while (!pq.empty())
    {
        auto itr = pq.top();
        pq.pop();
        int weight = itr.first;
        int node = itr.second;

        if (visited[node])
            continue;
        else
        {
            visited[node] = 1;
            sum += weight;

            for (auto neighbor : adjList[node])
            {
                int adjNode = neighbor.first;
                int edgeWt = neighbor.second;
                if (!visited[adjNode])
                {
                    pq.push({edgeWt, adjNode});
                    mstEdges.push_back({node, adjNode});
                }
            }
        }
    }
    return mstEdges;
}

int main()
{
    int m, n;
    cout << "Enter number of nodes: ";
    cin >> n;
    cout << "Enter number of edges: ";
    cin >> m;

    vector<pair<int, int>> adjList[n];
    vector<int> visited(n, 0);

    storeGraph(m, n, adjList);

    vector<pair<int, int>> result = findMST(visited, adjList);
    // cout << "\nSum of the MST is: " << result.first << endl;

    cout << "MST Edges:" << endl;
    for (auto edge : result)
    {
        cout << edge.first << " - " << edge.second << endl;
    }

    return 0;
}
