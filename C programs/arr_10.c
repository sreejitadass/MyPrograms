#include <stdio.h>
int main()
{
    int n,j=0,k=0;
    printf("enter the size of array: ");
    scanf("%d", &n);
    int a[n];
    int odd[]={};
    int even[]={};
    for(int i=0;i<n;i++)
    {
        printf("enter element at index %d: ",i);
        scanf("%d", &a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
          even[k]=a[i];
          k++;
        }
        else
        {
            odd[j]=a[i];
            j++;
        }
    }
    printf("Odd numbers: \n");
    for(int i=0;i<j;i++)
    {
       printf("%d ",odd[i]);
    }
    printf("\nEven numbers: \n");
    for(int i=0;i<k;i++)
    {
       printf("%d ",even[i]);
    }
    return 0;
}
