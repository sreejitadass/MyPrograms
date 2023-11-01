#include <iostream>
#include <vector>
using namespace std;

class DisjointSet
{
    vector<int> parent, rank;

public:
    DisjointSet(int n) // constructor to initialize parent and rank array
    {
        rank.resize(n + 1, 0);
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

    void unionByRank(int u, int v)
    {
        int PU_u = findUPar(u);
        int PU_v = findUPar(v);
        if (PU_v == PU_u) // belong to same component
            return;
        if (rank[PU_u] < rank[PU_v])
            parent[PU_u] = PU_v;
        else if (rank[PU_v] < rank[PU_u])
            parent[PU_v] = PU_u;
        else
        {
            parent[PU_v] = PU_u;
            rank[PU_u]++;
        }
    }

    void displayParent()
    {
        for (int x : parent)
            cout << x << " ";
        cout << endl;
    }

    void displayRank()
    {
        for (int x : rank)
            cout << x << " ";
        cout << endl;
    }
};

int main()
{
    DisjointSet ds(7); // 7 nodes
    ds.unionByRank(1, 2);
    ds.unionByRank(2, 3);
    ds.unionByRank(4, 5);
    ds.unionByRank(6, 7);
    ds.unionByRank(5, 6);

    cout << "\nBefore union--" << endl;
    if (ds.findUPar(3) == ds.findUPar(7))
        cout << "3 and 7 belong to same component" << endl;
    else
        cout << "3 and 7 do not belong to same component" << endl;

    ds.unionByRank(3, 7);

    cout << "\nAfter union--" << endl;
    if (ds.findUPar(3) == ds.findUPar(7))
        cout << "3 and 7 belong to same component" << endl;
    else
        cout << "3 and 7 do not belong to same component" << endl;

    cout << "\nParent:  ";
    ds.displayParent();
    cout << "Rank:  ";
    ds.displayRank();

    return 0;
}