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
        adjList[v].push_back(u);
    }
}

void DFS(int v, int n, vector<int> dfsTraversal, vector<int> adjList[])
{
    vector<int> visited(n + 1, 0);
    visited[v] = 1;
    stack<int> s;
    s.push(v);

    while (!s.empty())
    {
        int u = s.top();
        cout << u << " ";
        s.pop();

        for (int itr : adjList[u])
        {
            if (!visited[itr])
            {
                visited[itr] = 1;
                s.push(itr);
            }
        }
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

    cout << "\nThe DFS Traversal is: ";
    DFS(v, n, dfsTraversal, adjList);

    return 0;
}