#include <iostream>
#include <vector>
using namespace std;

class DisjointSet
{
    vector<int> parent, size;

public:
    DisjointSet(int n) // constructor to initialize parent and rank array
    {
        size.resize(n + 1, 1);
        parent.resize(n + 1);
        for (int i = 0; i < n + 1; i++)
            parent[i] = i;
    }

    // find ultimate parent and path compression
    int findUPar(int node)
    {
        if (parent[node] == node)
            return node;
        else
            return parent[node] = findUPar(parent[node]);
    }

    void unionBySize(int u, int v)
    {
        int PU_u = findUPar(u);
        int PU_v = findUPar(v);
        if (PU_v == PU_u) // belong to same component
            return;
        if (size[PU_u] < size[PU_v])
        {
            parent[PU_u] = PU_v;
            size[PU_v] += size[PU_u];
        }
        else
        {
            parent[PU_v] = PU_u;
            size[PU_u] += size[PU_v];
        }
    }

    void displayParent()
    {
        for (int x : parent)
            cout << x << " ";
        cout << endl;
    }

    void displaySize()
    {
        for (int x : size)
            cout << x << " ";
        cout << endl;
    }
};

int main()
{
    DisjointSet ds(7); // 7 nodes
    ds.unionBySize(1, 2);
    ds.unionBySize(2, 3);
    ds.unionBySize(4, 5);
    ds.unionBySize(6, 7);
    ds.unionBySize(5, 6);

    cout << "\nBefore union--" << endl;
    if (ds.findUPar(3) == ds.findUPar(7))
        cout << "3 and 7 belong to same component" << endl;
    else
        cout << "3 and 7 do not belong to same component" << endl;

    ds.unionBySize(3, 7);

    cout << "\nAfter union--" << endl;
    if (ds.findUPar(3) == ds.findUPar(7))
        cout << "3 and 7 belong to same component" << endl;
    else
        cout << "3 and 7 do not belong to same component" << endl;

    cout << "\nParent:  ";
    ds.displayParent();
    cout << "Size:  ";
    ds.displaySize();

    return 0;
}