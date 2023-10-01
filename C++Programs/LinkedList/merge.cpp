#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node *next;

    Node(int data){
        val=data;
        next=NULL;
    }
};

void create1(Node* &head1,int val1)
{
    Node *newnode= new Node(val1);
    Node *temp=head1;
    if(head1==NULL)
        head1=temp=newnode;
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

void create2(Node* &head2,int val2)
{
    Node *newnode= new Node(val2);
    Node *temp=head2;
    if(head2==NULL)
        head2=temp=newnode;
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

Node* merge(Node* &head1,Node* &head2)
{
    Node* head3=new Node(-1);

    Node* ptr1=head1;
    Node* ptr2=head2;
    Node *ptr3=head3;

    while(ptr1 && ptr2)
    {
        if(ptr1->val<ptr2->val)
        {
            ptr3->next=ptr1;
            ptr1=ptr1->next;
        }
        else
        {
            ptr3->next=ptr2;
            ptr2=ptr2->next;
        }
        ptr3=ptr3->next;
    }
    if(ptr1)
    {
        ptr3->next=ptr1;
    }
    else
    {
        ptr3->next=ptr2;
    }
    return head3->next;
}

void display(Node *head3){
    Node *temp=head3;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    int val1,val2;
    Node* head1=NULL;
    Node* head2=NULL;
    Node* head3=NULL;

    int m,n;
    cout<<"Enter the number of nodes for both: ";
    cin>>m>>n;

    cout<<"\nFor linked-list 1: "<<endl;
    for(int i=0;i<m;i++){
        cout<<"Enter the node: ";
        cin>>val1;
        create1(head1,val1);
    }

    cout<<"\nFor linked-list 2: "<<endl;
    for(int i=0;i<n;i++){
        cout<<"Enter the node: ";
        cin>>val2;
        create1(head2,val2);
    }

    head3=merge(head1,head2);
    display(head3);
}