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

void InsertatEnd(Node* &head,int val){
    Node *newnode=new Node(val);
    Node *temp;
    if(head==NULL){
        head=newnode;
    }
    else{
        
    }
}

void display(Node *head){
    Node *temp=head;
    while(temp->next!=NULL){
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
        InsertatEnd(head,val);
    }
    display(head);

    return 0;
}

