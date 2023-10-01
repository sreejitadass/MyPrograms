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

void createLL(Node* &head, int val)
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

Node* ReversekLL(Node* &head,int k)
{
    Node* current=head;
    Node* prev=NULL;
    int ctr=0;
    while(current!=NULL && ctr<k)
    {
        Node* currnext=current->next;
        current->next=prev;
        prev=current;
        current=currnext;
        ctr++;
    }

    if(current!=NULL)
    {
        Node* newHead=ReversekLL(head,k);
        head->next=newHead;
    }
    return prev;
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
    int k;
    cout<<"Enter number of elements to be reversed at a time: ";
    cin>>k;

    head=ReversekLL(head,k);
    display(head);

    return 0;
}