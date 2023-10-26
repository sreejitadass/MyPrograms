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

void DFS(int v, int n, vector<int> &dfsTraversal, vector<int> adjList[], vector<int> &visited)
{
    visited[v] = 1;

    dfsTraversal.push_back(v);

    for (int u : adjList[v])
    {
        if (!visited[u])
            DFS(u, n, dfsTraversal, adjList, visited);
    }
}

int main()
{
    int m, n, v;
    vector<int> dfsTraversal;

    cout << "Enter number of nodes: ";
    cin >> n;
    cout << "Enter number of edges: ";
    cin >> m;

    vector<int> adjList[n + 1];
    vector<int> visited(n + 1, 0);

    storeGraph(m, n, adjList);

    cout << "\nEnter starting node: ";
    cin >> v;
    DFS(v, n, dfsTraversal, adjList, visited);

    cout << "\nThe DFS traversal is: " << endl;
    for (int i = 0; i < dfsTraversal.size(); i++)
    {
        cout << dfsTraversal[i] << " ";
    }
    cout << endl;

    return 0;
}