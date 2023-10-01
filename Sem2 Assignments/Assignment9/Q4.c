#include<stdio.h>

void TargetSum(int cost[],int n,int m)
{
    printf("\nThe 2 flavours that meet the criteria are: ");
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(cost[i]+cost[j]==m)
            {
                printf("\n%d and %d at indices: %d and %d ",cost[i],cost[j],i,j);
                break;
            }
        }
    }
}
int main()
{
    int m,n;
    printf("Enter the total money to be spent: ");
    scanf("%d",&m);
    printf("Enter the number of ice-cream flavours: ");
    scanf("%d",&n);
    int cost[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the cost of flavour %d: ",i+1);
        scanf("%d",&cost[i]);
    }

    TargetSum(cost,n,m);
    return 0;
}