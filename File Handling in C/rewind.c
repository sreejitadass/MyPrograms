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
    fseek(fp,7,SEEK_SET);
    while(!feof(fp))
        printf("%c",fgetc(fp));
    printf("\n");
    rewind(fp);
    while(!feof(fp))
        printf("%c",fgetc(fp));
    fclose(fp);

}