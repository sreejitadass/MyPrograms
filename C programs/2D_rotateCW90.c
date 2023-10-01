#include <stdio.h>
int main()
{
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int n=3;

    //transpose
    int temp=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }

    //rotate
    for(int i=0;i<3;i++)
    {
        temp=0;
        int j=0,k=n-1;
        while(j<k)
        {
            temp=a[i][j];
            a[i][j]=a[i][k];
            a[i][k]=temp;
        }
    }

    //print array
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}