#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node *next;

    Node(int data){
        val=data;
    }
};

void createLL(Node* &head,int val)
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

void deleteatEnd(Node* &head)
{
    Node *temp=NULL;
    Node *temp2=NULL;
    temp2=head->next;
    temp2->next=NULL;
    while(temp!=NULL)
        temp=temp->next;
    free(temp);
    temp=NULL;
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
    int n,val;
    Node *head=NULL;
    cout<<"Enter the number of nodes: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the node: ";
        cin>>val;
        createLL(head,val);
    }
    cout<<"Original: ";
    display(head);
    cout<<"After deletion: ";
    deleteatEnd(head);
    display(head);
}