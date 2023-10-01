#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;

void Enqueue()
{
    int x;
    printf("Enter the data to be inserted: ");
    scanf("%d",&x);
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;

    if(front==NULL && rear==NULL)
        front=rear=newnode;
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
}

void Dequeue()
{
    struct node *temp=front;
    if(front==NULL && rear==NULL)
        printf("\nEmpty queue");
    else
    {
        printf("\nDequeued element is: %d",front->data);
        front=front->next;
        free(temp);
    }    
}

void Peek()
{
    if(front==NULL && rear==NULL)
        printf("\nEmpty queue");
    else
        printf("\nElement at front is: %d",front->data);
}

void Display()
{
    struct node *temp=front;
    if(front==NULL && rear==NULL)
        printf("\nEmpty queue");
    else
    {
        printf("\nQueue: ");
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
}

int main()
{
    int ch=1;
    do
    {
        printf("\n1.Enqueue");
        printf("\n2.Dequeue");
        printf("\n3.Peek");
        printf("\n4.Display");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                Enqueue();
                break;
            case 2:
                Dequeue();
                break;
            case 3:
                Peek();
                break;
            case 4:
                Display();
                break;
            default:
                printf("\nInvalid choice");
        }
        printf("\nEnter 0 to exit and 1 to continue: ");
        scanf("%d",&ch);
    }while(ch!=0);
    
    return 0;
}