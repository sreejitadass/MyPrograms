#include <stdio.h>
int main()
{
    int *arr;
    int n,c=0,fr=0;
    printf("enter the size: ");
    scanf("%d", &n);
    arr=(int *)calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
    {
        printf("\nenter element %d: ", i);
        scanf("%d", arr+i);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if (arr[i]==arr[j+1])
                c++;
        }
        if(c>=2)
            fr++;
        c=0;
    }
    printf("number of duplicate elements: %d",fr);
    return 0;
}
