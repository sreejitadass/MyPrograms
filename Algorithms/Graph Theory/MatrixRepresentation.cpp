#include <iostream>
#include <vector>
using namespace std;

void storeGraph(int n)
{
    vector<vector<int>> adjMatrix(n, vector<int>(n, 0));

    cout << "\nEnter y for edge and n for no edge\n"
         << endl;
    char ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Edge between " << (i + 1) << " and " << (j + 1) << ": ";
            cin >> ans;

            if (ans == 'y' || ans == 'Y')
                adjMatrix[i][j] = 1;
        }
        cout << endl;
    }

    cout << "\nThe adjacency matrix is: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << adjMatrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    storeGraph(n);
    return 0;
}