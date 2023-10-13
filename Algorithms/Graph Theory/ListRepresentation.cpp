#include <iostream>
#include <vector>
using namespace std;

void storeGraph(int m, int n)
{
    vector<int> adjList[n + 1]; // array whose each elt stores vector
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

    cout << "The adjacency list is: " << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << i << ": ";
        for (int j = 0; j < adjList[i].size(); j++)
        {
            cout << adjList[i][j];
            if (j < adjList[i].size() - 1)
            {
                cout << "-->";
            }
        }
        cout << endl;
    }
}

int main()
{
    int m, n;
    cout << "Enter the number of edges: ";
    cin >> m;
    cout << "Enter the number of nodes: ";
    cin >> n;

    storeGraph(m, n);
    return 0;
}