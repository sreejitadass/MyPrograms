#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    fp=fopen("pr1.c","r");
    if(fp==NULL)
    {
        printf("Error");
        exit(1);
    }
    char str[50];
    while(!feof(fp))
    {
        fgets(str,50,fp);
        printf("%s",str);
    }
    fclose(fp);
}
