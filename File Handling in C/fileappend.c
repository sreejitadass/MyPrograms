#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    fp=fopen("abc.txt","a");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }
    char str[50];
    printf("enter string to be appended: ");
    gets(str);
    fprintf(fp,"%s",str);
    fclose(fp);
}