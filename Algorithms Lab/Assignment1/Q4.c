#include<stdio.h>

void Pattern(int arg,int n,char matrix[n][n])
{
    int x=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            matrix[i][j]=' ';
        }
    }
    for(int i=0;i<n;i++)
    {
        if(i%(arg+1)==0)
        {
            for(int j=0;j<n;j++)
                matrix[i][j]='*';
            x++;
        }
        else
        {
            for(int k=0;k<arg;k++)
            {
                if(x%2!=0)
                    matrix[i][n-1]='*';
                else
                    matrix[i][0]='*';
            }
        }
    }
}

void Display(int n,char matrix[n][n])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%c",matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    char matrix[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            matrix[i][j]='*';
        }
    }

    int arg;
    printf("Enter the value of argument: ");
    scanf("%d",&arg);
    Pattern(arg,n,matrix);
    Display(n,matrix);

    return 0;
}