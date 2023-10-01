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
    fputs("Hello",fp); 
    rewind(fp);
    
    while(!feof(fp))
    {
        char ch=fgetc(fp);
        printf("%c",ch);
    }
    fputs("Bye",fp);
    fclose(fp);
}
