#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void storeGraph(int m, int n, vector<int> adjList[])
{

    for (int i = 0; i < m; i++)
    {
        // u---v
        int u, v;
        cout << "\nFor edge " << (i + 1) << ": " << endl;
        cout << "Enter starting node: ";
        cin >> u;
        cout << "Enter ending node: ";
        cin >> v;

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
}

vector<int> BFS(int n, vector<int> adjList[])
{
    int visited[n + 1] = {0}; // 1 based indexing
    visited[1] = 1;
    queue<int> q;

    q.push(1); // starting node is 1
    vector<int> bfsTraversal;

    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        bfsTraversal.push_back(v);

        for (auto itr : adjList[v])
        {
            if (!visited[itr])
            {
                visited[itr] = 1;
                q.push(itr);
            }
        }
    }
    return bfsTraversal;
}

int main()
{
    int m, n;
    cout << "Enter the number of edges: ";
    cin >> m;
    cout << "Enter the number of nodes: ";
    cin >> n;
    vector<int> adjList[n + 1]; // array whose each elt stores vector

    storeGraph(m, n, adjList);

    vector<int> bfsTraversal = BFS(n, adjList);
    cout << "\nThe BFS Traversal is: ";
    for (int i = 0; i < bfsTraversal.size(); i++)
    {
        cout << bfsTraversal[i] << " ";
    }
    cout << endl;

    return 0;
}