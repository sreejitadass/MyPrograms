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

void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void convertToAdjList(int n, vector<vector<int>> adjMatrix)
{
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }

    Node *head = NULL;
    Node *newnode = NULL;
    Node *temp = NULL;

    for (int i = 0; i < n; i++)
    {
        head = new Node(arr[i]);
        head->next = NULL;

        temp = head;
        for (int j = 0; j < n; j++)
        {
            if (adjMatrix[i][j] == 1)
            {
                newnode = new Node(arr[j]);
                while (temp->next != NULL)
                {
                    temp = temp->next;
                }
                temp->next = newnode;
                temp = newnode;
            }
        }
        display(head);
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number of vertices: ";
    cin >> n;

    vector<vector<int>> adjMatrix(n, vector<int>(n));
    cout << "\nEnter 0 for no path and 1 for directed path: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Directed path between vertex " << i + 1 << " and " << j + 1 << ": ";
            cin >> adjMatrix[i][j];
        }
        cout << endl;
    }

    cout << "\nThe converted adjacency list is: " << endl;
    convertToAdjList(n, adjMatrix);

    return 0;
}