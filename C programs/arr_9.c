#include <stdio.h>
int main()
{
    int *arr;
    int n,c=0;
    int fr[]={};
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
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
                fr[j]=0;
            }
        }
        if(fr[i]!=0)
            fr[i]=c;
    }
    printf("Element\t\tFrequency\n");
    for(int i=0;i<n;i++)
    {
        if(fr[i]!=0)
            printf("%d\t\t%d\n", arr[i],fr[i]);
    }
    return 0;
}
