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

void ifEqual(Node* &head1,Node* &head2)
{
    bool flag=true;
    Node* ptr1=head1;
    Node* ptr2=head2;
    while(ptr1!=NULL && ptr2!=NULL)
    {
        if(ptr1->val!=ptr2->val)
        {
            flag=false;
            break;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    if(flag)
        cout<<"Equal linked lists"<<endl;
    else
        cout<<"Unequal linked lists"<<endl;
}

int main()
{
    int val1,val2;
    Node* head1=NULL;
    Node* head2=NULL;

    int n;
    cout<<"Enter the number of nodes: ";
    cin>>n;

    cout<<"\nFor linked-list 1: "<<endl;
    for(int i=0;i<n;i++){
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

    ifEqual(head1,head2);

    return 0;
}
