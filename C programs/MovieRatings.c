#include<stdio.h>

void InsertRandom(int u,int m,int R[u][m])
{
    int R1[u][m],Dev[u][m];
    for(int i=0;i<u;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(R[i][j]==0)
            {
                int num=(rand()%(5-1))+1;
                R1[i][j]=num;
            }
            else
            {
                R1[i][j]=R[i][j];
            }
            Dev[i][j]=R1[i][j]-R[i][j];        
        }
    }
    printf("New Matrix: \n");
    for(int i=0;i<u;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",R1[i][j]);
        }
        printf("\n");
    }
    printf("Deviated Matrix: \n");
    for(int i=0;i<u;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",Dev[i][j]);
        }
        printf("\n");
    }
}

void InsertRowAvg(int u,int m,int R[u][m])
{
    int R1[u][m],Dev[u][m],sum_row=0;
    for(int i=0;i<u;i++)
    {
        for(int j=0;j<m;j++)
        {
            sum_row+=
        }
    }
    for(int i=0;i<u;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(R[i][j]==0)
                {
                    
                }
                    
            }
        }
}
int main()
{
    int u,m;
    printf("enter the number of users: ");
    scanf("%d",&u);
    printf("enter the number of movies: ");
    scanf("%d",&m);
    int R[u][m];
    for(int i=0;i<u;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("enter movie rating of movie %d for user %d: ",j,i);
            scanf("%d",&R[i][j]);
        }
    }
}
