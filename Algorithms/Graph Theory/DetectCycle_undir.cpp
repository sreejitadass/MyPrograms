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

bool dfs(int node, int parent, vector<int> &visited, vector<int> adjList[])
{
    visited[node] = 1;
    for (auto itr : adjList[node])
    {
        // for unvisited neighbour of node
        if (!visited[itr])
        {
            if (dfs(itr, node, visited, adjList))
                return true;
        }
        // for visited node where parents are unequal
        else if (itr != parent)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

bool detectCycle(int n, vector<int> &visited, vector<int> adjList[])
{
    for (int i = 1; i < n + 1; i++)
    {
        // connected components graph
        if (!visited[i])
        {
            if (dfs(i, -1, visited, adjList))
                return true;
        }
    }
    return false;
}

int main()
{
    int m, n;
    cout << "Enter number of nodes: ";
    cin >> n;
    cout << "Enter number of edges: ";
    cin >> m;

    vector<int> adjList[n + 1];
    vector<int> visited(n + 1, 0);

    storeGraph(m, n, adjList);

    bool ans = detectCycle(n, visited, adjList);
    if (ans == true)
        cout << "\nCycle detected" << endl;
    else
        cout << "\nCycle not detected" << endl;

    return 0;
}