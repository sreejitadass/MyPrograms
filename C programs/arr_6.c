#include <stdio.h>
int main()
{
    int *arr;
    int n,c_odd=0;
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
        if(arr[i]%2!=0)
        {
            c_odd++;
        }
    }
    printf("number of odd elements= %d", c_odd);
    return 0;
}

