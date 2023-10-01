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

void create(Node* &head,int val)
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

void deletekEnd(Node* &head,int k)
{
    Node* ptr1=head;
    Node* ptr2=head;
    int ctr=k;
    while(ctr--)
    {
        ptr2=ptr2->next;   
    }
    while(ptr2->next!=NULL)
    {
        ptr1=ptr1->next;     //ptr2->NULL,ptr1->k from beg
        ptr2=ptr2->next;
    }
    Node* temp=ptr1->next;
    ptr1->next=ptr1->next->next;
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
    char ans='y';
    int val;
    Node* head=NULL;
    while(ans=='y')
    {
        cout<<"Enter element: ";
        cin>>val;
        create(head,val);
        cout<<"Enter y to continue and n to exit: ";
        cin>>ans;
    }
    deletekEnd(head,3);
    display(head);

    return 0;
}