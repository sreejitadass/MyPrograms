#include<stdio.h>
#include<math.h>

int CeilFunction(int x)
{
    return ((int)x)+1;
}

int MinimumHeight(int n)
{
    double minheight=log2(n+1)-1;
    return CeilFunction(minheight);
}

int MaximumHeight(int n)
{
    int a=0,b=1,c=1,maxheight=0;
    while(c<n)
    {
        c=a+b+1;
        a=b;
        b=c;
        maxheight++;
    }
    return maxheight+1;
}

int main()
{
    int n;
    printf("Enter the number of nodes of the AVL tree: ");
    scanf("%d",&n);

    printf("Minimum height of the AVL tree is: %d",MinimumHeight(n));
    printf("\nMaximum height of the AVL tree is: %d",MaximumHeight(n));

    return 0;
}