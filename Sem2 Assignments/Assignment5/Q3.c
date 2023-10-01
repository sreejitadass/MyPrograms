#include<stdio.h>
#include<stdbool.h>
int f1=-1,f2=-1,r1=-1,r2=-1;

void Enqueue1(int x,int Q1[])
{
    if(f1==-1 && r1==-1)
    {
        f1=r1=0;
        Q1[r1]=x;
    }
    else
    {
        r1++;
        Q1[r1]=x;
    }
}

void Enqueue2(int y,int Q2[])
{
    if(f2==-1 && r2==-1)
    {
        f2=r2=0;
        Q2[r2]=y;
    }
    else
    {
        r2++;
        Q2[r2]=y;
    }    
}

void ifEqual(int Q1[],int Q2[],int N1,int N2)
{
    bool flag=true;
    if(N1!=N2)
    {
        printf("\nQueues are of unequal length");
    }
    else
    {
        for(int i=0;i<N1;i++)
        {
            if(Q1[i]!=Q2[i])
            {
                flag=false;
                break;
            }
        }
        if(!flag)
            printf("\nUnequal queues");
        else
            printf("\nEqual queues");
    }
}
int main()
{
    int N1,N2;
    int x,y;
    printf("Enter the size of queue-1: ");
    scanf("%d",&N1);
    printf("Enter the size of queue-2: ");
    scanf("%d",&N2);
    int Q1[N1],Q2[N2];

    printf("\nInput for Queue-1: \n");
    for(int i=0;i<N1;i++)
    {
        printf("Enter the data: ");
        scanf("%d",&x);
        Enqueue1(x,Q1);
    }
    printf("\nInput for Queue-2: \n");
    for(int i=0;i<N2;i++)
    {
        printf("Enter the data: ");
        scanf("%d",&y);
        Enqueue2(y,Q2);
    }

    printf("\nQueue-1:  ");
    for(int i=f1;i<=r1;i++)
        printf("%d ",Q1[i]);
    printf("\nQueue-2:  ");
    for(int j=f2;j<=r2;j++)
        printf("%d ",Q2[j]);
    
    ifEqual(Q1,Q2,N1,N2);
    return 0;
}