#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    fp=fopen("xyz.txt","w+");
    if(fp==NULL)
    {
        printf("Error");
        exit(1);
    }
    /*int pos=ftell(fp);
    printf("Position of pointer: %d",pos);
    fseek(fp,6,SEEK_SET);
    printf("\nPosition of pointer: %d",ftell(fp));
    fseek(fp,-4,SEEK_CUR);
    printf("\nPosition of pointer: %d",ftell(fp));*/
    fseek(fp,0,SEEK_END);
    printf("\nLength: %d",ftell(fp));
    fclose(fp);
}