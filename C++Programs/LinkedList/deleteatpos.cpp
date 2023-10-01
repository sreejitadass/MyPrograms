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

void deleteatPosition(Node* &head,int pos)
{
    Node *prev=head;
    int current=0;
    while(current!=pos-1)
    {
        prev=prev->next;
        current++;
    }
    Node *temp=prev->next;
    prev->next=prev->next->next;
    free(temp);
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
    int n,val,pos;
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
    cout<<"Enter position: ";
    cin>>pos;
    cout<<"After deletion: ";
    deleteatPosition(head,pos);
    display(head);

}