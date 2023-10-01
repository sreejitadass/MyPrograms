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

void InsertatPosition(Node* &head,int x,int pos)
{
    Node *temp=head;
    int current=0;
    while(current!=pos-1)
    {
        temp=temp->next;
        current++;
    }
    Node *newnode=new Node(x);
    newnode->next=temp->next;
    temp->next=newnode;
}

void updation(Node* &head,int ele,int k)
{
    Node *temp=head;
    int current=0;
    while(current!=k)
    {
        temp=temp->next;
        current++;
    }
    temp->val=ele;
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
    int n,val,x,pos,ele,k;
    Node *head=NULL;
    cout<<"Enter the number of nodes: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the node: ";
        cin>>val;
        createLL(head,val);
    }
    cout<<"Enter the value to be inserted: ";
    cin>>x;
    cout<<"Enter the position of insertion: ";
    cin>>pos;

    cout<<"The original linked list is: ";
    display(head);
    cout<<"The linked list after insertion is: ";
    InsertatPosition(head,x,pos);
    display(head);

    cout<<"Enter the new element: ";
    cin>>ele;
    cout<<"Enter the position of updation: ";
    cin>>k;
    cout<<"The linked list after updation is: ";
    InsertatPosition(head,ele,k);
    display(head);

    return 0;    
}


