#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node *next;

    Node(int data)
    {
        val=data;
        next=NULL;
    }
};

void insertatEnd(Node* &head,int val)
{
    Node *newnode= new Node(val);
    Node *temp=head;
    if(head==NULL)
        head=temp=newnode;
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;        
        }
        temp->next=newnode;
        temp=newnode;
    }
}

void display(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    Node *head=NULL;
    int n,val;
    cout<<"Enter the number of nodes: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the node: ";
        cin>>val;
        insertatEnd(head,val);
    }
    display(head);
    return 0;
}

