#include <iostream>
#include <vector>
#include <algorithm>
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
};

int findMST(int n, vector<vector<int>> adjList[], vector<pair<int, pair<int, int>>> &MSTedges)
{
    // converting from adjacency list to pair format
    vector<pair<int, pair<int, int>>> edges;
    // 2->(1,5)
    for (int i = 0; i < n; i++)
    {
        for (auto itr : adjList[i])
        {
            int node = i;         // 2
            int adjNode = itr[0]; // 1
            int weight = itr[1];  // 5

            edges.push_back({weight, {node, adjNode}}); //{5,{2,1}}
        }
    }

    DisjointSet ds(n); // ds is object of Disjoint Set class
    sort(edges.begin(), edges.end());
    int mstW = 0;

    for (auto it : edges)
    {
        int wt = it.first;        // 5
        int u = it.second.first;  // 2
        int v = it.second.second; // 1

        // if u and v belong to different components then add to MST and perform union
        if (ds.findUPar(u) != ds.findUPar(v))
        {
            mstW += wt;
            MSTedges.push_back({wt, {u, v}});
            ds.unionByRank(u, v);
        }
    }
    return mstW;
}

int main()
{
    int n = 5;
    // edges stores {u,v,wt} format
    vector<vector<int>> edges = {{0, 1, 2}, {0, 2, 1}, {1, 2, 1}, {2, 3, 2}, {3, 4, 1}, {4, 2, 2}};
    vector<vector<int>> adjList[n];
    vector<pair<int, pair<int, int>>> MSTedges;

    // converting edges to adjacency list
    for (auto it : edges)
    {
        // tmp is for storing v and wt associated with u
        vector<int> tmp(2);
        tmp[0] = it[1];
        tmp[1] = it[2];
        adjList[it[0]].push_back(tmp); // 0->{1,2}

        tmp[0] = it[0];
        tmp[1] = it[2];
        adjList[it[1]].push_back(tmp); // reverse direction operation for undirected graph
    }

    cout << "\nThe MST weight is: " << findMST(n, adjList, MSTedges) << endl;
    cout << "\nThe MST is: " << endl;
    for (auto it : MSTedges)
    {
        int u = it.second.first;
        int v = it.second.second;
        int wt = it.first;
        cout << "Edge: " << u << " - " << v << ", Weight: " << wt << endl;
    }

    return 0;
}
