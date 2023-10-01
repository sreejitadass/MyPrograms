#include<stdio.h>
int main()
{
    int c=0,max=0,max_row;
    int mat[3][4]={{1,0,0,0},{1,1,0,0},{1,1,1,1}};
    for(int i=0;i<3;i++)
    {
        c=0;
        for(int j=0;j<4;j++)
        {
            if(mat[i][j]==1)
                c++;
        }
        if(c>max)
        {
            max=c;
            max_row=i+1;
        }  
    }
    printf("Maximum number of 1s is in row %d",max_row);
    return 0;
}
