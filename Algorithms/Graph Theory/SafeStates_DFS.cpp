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

bool checkDFS(int node, vector<int> &visited, vector<int> &pathVisited, vector<int> &checkSafeState, vector<int> adjList[])
{
    visited[node] = 1;
    pathVisited[node] = 1;

    for (int itr : adjList[node])
    {
        if (!visited[itr])
        {
            if (checkDFS(itr, visited, pathVisited, checkSafeState, adjList))
            {
                checkSafeState[node] = 0;
                return true;
            }
        }
        else if (visited[itr] && pathVisited[itr])
        {
            checkSafeState[node] = 0;
            return true;
        }
    }
    // in case no cycle is detected
    checkSafeState[node] = 1;
    pathVisited[node] = 0;
    return false;
}

vector<int> findEventualSafeStates(int n, vector<int> &visited, vector<int> &pathVisited, vector<int> &checkSafeStates, vector<int> adjList[])
{
    vector<int> safeNodes;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            checkDFS(i, visited, pathVisited, checkSafeStates, adjList);
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (checkSafeStates[i])
        {
            safeNodes.push_back(i);
        }
    }
    return safeNodes;
}

int main()
{
    int m, n;
    cout << "Enter number of nodes: ";
    cin >> n;
    cout << "Enter number of edges: ";
    cin >> m;

    vector<int> adjList[n];
    vector<int> visited(n, 0);
    vector<int> pathVisited(n, 0);
    vector<int> checkSafeState(n);

    storeGraph(m, n, adjList);

    vector<int> safeNodes = findEventualSafeStates(n, visited, pathVisited, checkSafeState, adjList);
    cout << "\nThe safe states are: " << endl;
    for (int x : safeNodes)
        cout << x << " ";
    cout << endl;

    return 0;
}