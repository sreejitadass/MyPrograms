#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int data)
    {
        val = data;
        next = NULL;
    }
};

void display(int n, vector<vector<int>> adjMatrix)
{
    cout << "\nThe adjacency matrix: \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << adjMatrix[i][j] << " ";
        }
        cout << endl;
    }
}

void convertToAdjMatrix(int n, int arr[], vector<vector<int>> &adjMatrix)
{
    Node *head = NULL;
    Node *newnode = NULL;
    Node *temp = NULL;

    for (int i = 0; i < n; i++)
    {
        int x;
        head = new Node(arr[i]);
        temp = head;
        cout << "\nFor directed graph--" << endl;
        cout << "\nEnter number of nodes linked to " << arr[i] << ": ";
        cin >> x;

        int nodes[x] = {0};
        for (int j = 0; j < x; j++)
        {
            cout << "Enter node " << (j + 1) << ": ";
            cin >> nodes[j];
        }

        for (int j = 0; j < x; j++)
        {
            newnode = new Node(nodes[j]);
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
            temp = newnode;
        }

        for (int j = 0; j < x; j++)
        {
            adjMatrix[i][nodes[j] - 1] = 1;
        }
    }
    display(n, adjMatrix);
}

int main()
{
    int n;
    cout << "Enter the number of vertices: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }

    vector<vector<int>> adjMatrix(n, vector<int>(n, 0));

    convertToAdjMatrix(n, arr, adjMatrix);
    return 0;
}