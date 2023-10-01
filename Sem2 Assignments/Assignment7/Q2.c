#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool flag=false;

int LinearSearch(int n,char arr[n][50])
{
    char key[50];
    printf("\nEnter the word to be searched: ");
    scanf("%s",key);
    for(int i=0;i<n;i++)
    {
        if(strcmp(key,arr[i])==0)
        {
            flag=true;
            return i;
        }
    }
}
int main()
{
    int n;
    printf("Enter the number of words in the array: ");
    scanf("%d",&n);
    char arr[n][50];
    for(int i=0;i<n;i++)
    {
        printf("Enter word %d: ",i+1);
        scanf("%s",arr[i]);
    }

    printf("List of strings: \n");
    for(int i=0;i<n;i++)
    {
        printf("%s ",arr[i]);
    }

    int pos=LinearSearch(n,arr);
    if(flag)
        printf("\nThe first occurence of the word is at index %d\n",pos);
    else
        printf("\nWord not found");
    return 0;
}