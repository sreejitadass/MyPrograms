#include <stdio.h>
int main()
{
    int *arr;
    int n,c;
    printf("enter the size: ");
    scanf("%d", &n);
    arr=(int *)calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
    {
        printf("\nenter element %d: ", i);
        scanf("%d", arr+i);
    }
    printf("\nunique elements:  ");
    for(int i=0;i<n;i++)
    {
        c=0;
        for(int j=0;j<i;j++)
        {
            if (arr[i]==arr[j+1])
                c++;
        }
        if(c==0)
            printf("%d  ", arr[i]);
    }
    return 0;
}
