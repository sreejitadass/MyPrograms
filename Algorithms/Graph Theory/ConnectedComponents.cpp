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

void DFS(int v, int n, vector<int> adjList[], vector<int> &visited)
{
    visited[v] = 1;

    for (int itr : adjList[v])
    {
        if (!visited[itr])
        {
            DFS(itr, n, adjList, visited);
        }
    }
}

int noOfCC(int n, vector<int> adjList[], vector<int> &visited)
{
    int count = 0;
    for (int i = 1; i < n + 1; i++)
    {
        if (!visited[i])
        {
            count++;
            DFS(i, n, adjList, visited);
        }
    }
    return count;
}

int main()
{
    int m, n;
    cout << "Enter number of nodes: ";
    cin >> n;
    cout << "Enter number of edges: ";
    cin >> m;

    vector<int> adjList[n + 1];
    storeGraph(m, n, adjList);

    vector<int> visited(n + 1, 0);

    cout << "\nThe number of connected components is = " << noOfCC(n, adjList, visited) << endl;
    return 0;
}