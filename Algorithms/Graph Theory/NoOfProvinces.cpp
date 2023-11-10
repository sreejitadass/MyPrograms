#include <iostream>
#include <vector>
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

void DFS(int node, vector<int> &visited, vector<int> adjList[])
{
    visited[node] = 1;

    for (int u : adjList[node])
    {
        if (!visited[u])
        {
            DFS(u, visited, adjList);
        }
    }
}

int findProvinces(int n, vector<int> &visited, vector<int> adjList[])
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            DFS(i, visited, adjList);
            count++;
        }
    }
    return count;
}

int main()
{
    int m, n;
    cout << "Enter number of edges: ";
    cin >> m;
    cout << "Enter number of nodes: ";
    cin >> n;
    vector<int> adjList[n + 1];
    vector<int> visited(n + 1, 0);

    storeGraph(m, n, adjList);
    cout << "\nTotal number of provinces in the graph is: " << findProvinces(n, visited, adjList) << endl;
    return 0;
}