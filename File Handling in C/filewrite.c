#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    fp=fopen("abc.txt","w");
    if(fp==NULL)
    {
        printf("Error");
        exit(1);
    }
    char ch='a';
    char str[50]="File Handling in C";
    int i=100;
    float f=9.5;
    fputc(ch,fp);
    fputs(str,fp);
    fprintf(fp,"%c %s %d %.1f",ch,str,i,f);
    fclose(fp);
    }