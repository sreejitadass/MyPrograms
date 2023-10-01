#include<stdio.h>
#include<string.h>

void InsertionSortStrings(int n,char arr[n][50])
{
    char current[50];
    for(int i=1;i<n;i++)
    {
        strcpy(current,arr[i]);
        int j=i-1;
        while(strcmp(arr[j],current)>0 && j>=0)
        {
            strcpy(arr[j+1],arr[j]);
            j--;
        }
        strcpy(arr[j+1],current);
    }
}

void Display(int n,char arr[n][50])
{
    for(int i=0;i<n;i++)
    {
        printf("%s ",arr[i]);
    }    
}
int main()
{
    int n;
    printf("Enter the number of strings: ");
    scanf("%d",&n);
    char arr[n][50];
    for(int i=0;i<n;i++)
    {
        printf("Enter string %d: ",i+1);
        scanf("%s",arr[i]);
    }
    printf("\nList of strings: \n");
    Display(n,arr);
    InsertionSortStrings(n,arr);
    printf("\nSorted list of strings: \n");
    Display(n,arr);

    return 0;    
}