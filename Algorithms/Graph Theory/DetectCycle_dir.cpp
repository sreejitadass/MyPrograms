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
    }
}

bool checkDFS(int node, vector<int> &visited, vector<int> &pathVisited, vector<int> adjList[])
{
    visited[node] = 1;
    pathVisited[node] = 1;

    for (int itr : adjList[node])
    {
        // if neighbour is not visited run DFS on it
        if (!visited[itr])
        {
            if (checkDFS(itr, visited, pathVisited, adjList))
            {
                return true;
            }
        }
        // if we find it is already both visited and path visited it is in a cycle
        else if (visited[itr] && pathVisited[itr])
        {
            return true;
        }
    }
    pathVisited[node] = 0;
    return false;
}

bool isCycle(int n, vector<int> &visited, vector<int> &pathVisited, vector<int> adjList[])
{
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            if (checkDFS(i, visited, pathVisited, adjList))
            {
                return true;
            }
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
    vector<int> pathVisited(n + 1, 0);

    storeGraph(m, n, adjList);

    bool ans = isCycle(n, visited, pathVisited, adjList);
    if (ans)
        cout << "\nCycle detected in directed graph" << endl;
    else
        cout << "\nCycle not detected" << endl;
    return 0;
}