#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    fp=fopen("xyz.txt","r");
    if(fp==NULL)
    {
        printf("Error");
        exit(1);
    }
    fseek(fp,6,SEEK_SET);
    printf("%c\n",fgetc(fp));
    fseek(fp,-3,SEEK_CUR);
    printf("%c\n",fgetc(fp));
    fseek(fp,-3,SEEK_END);
    printf("%c\n",fgetc(fp));
    fclose(fp);
}