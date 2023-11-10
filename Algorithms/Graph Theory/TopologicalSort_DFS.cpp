#include <iostream>
#include <vector>
#include <stack>
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

void DFS(int node, vector<int> &visited, vector<int> adjList[], stack<int> &s)
{
    visited[node] = 1;
    for (auto itr : adjList[node])
    {
        if (!visited[itr])
        {
            DFS(itr, visited, adjList, s);
        }
    }
    s.push(node);
}

vector<int> findTopologicalSort(int n, vector<int> &visited, vector<int> adjList[], stack<int> &s)
{
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            DFS(i, visited, adjList, s);
        }
    }
    vector<int> ans;
    while (!s.empty())
    {
        ans.push_back(s.top());
        s.pop();
    }
    return ans;
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
    stack<int> s;

    storeGraph(m, n, adjList);

    vector<int> ans = findTopologicalSort(n, visited, adjList, s);

    cout << "\nThe topological sort is: ";
    for (int x : ans)
        cout << x << " ";
    cout << endl;

    return 0;
}
