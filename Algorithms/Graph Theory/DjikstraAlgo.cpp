#include <bits/stdc++.h>
using namespace std;

vector<int> findSSSP_djikstra(vector<vector<int>> adjList[], int src, int n)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> dist(n);
    for (int i = 0; i < n; i++)
        dist[i] = 1e9;
    dist[src] = 0;

    pq.push({0, src});

    while (!pq.empty())
    {
        int d = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        for (auto itr : adjList[node])
        {
            int adjNode = itr[0];
            int edgeWt = itr[1];
            if (edgeWt + d < dist[adjNode])
            {
                dist[adjNode] = edgeWt + d;
                pq.push({dist[adjNode], adjNode});
            }
        }
    }
    return dist;
}

int main()
{
    int n, src, k = 0;
    vector<int> v1{1, 1}, v2{2, 6}, v3{2, 3}, v4{0, 1}, v5{1, 3}, v6{0, 6};
    cout << "Enter the number of nodes: ";
    cin >> n;
    cout << "Enter the source node: ";
    cin >> src;
    // vector<int> noOfEdges(n);
    vector<vector<int>> adjList[n];
    adjList[0].push_back(v1);
    adjList[0].push_back(v2);
    adjList[1].push_back(v3);
    adjList[1].push_back(v4);
    adjList[2].push_back(v5);
    adjList[2].push_back(v6);

    // cout << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cout << "Enter number of edges for vertex " << i << ": ";
    //     cin >> x;
    //     noOfEdges[i] = x;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << "\nFor vertex " << i << ": " << endl;
    //     for (int j = 0; j < noOfEdges[i]; j++)
    //     {
    //         int nbrNode, nodeWt;
    //         cout << "Enter neighbour node: ";
    //         cin >> nbrNode;
    //         cout << "Enter weight: ";
    //         cin >> nodeWt;

    //         adjList[i].push_back({nbrNode, nodeWt});
    //     }
    // }

    vector<int> dist = findSSSP_djikstra(adjList, src, n);
    cout << "\nShortest paths are: " << endl;
    for (int i = 0; i < dist.size(); i++)
    {
        cout << src << " to " << i << " = " << dist[i] << endl;
    }
    return 0;
}
