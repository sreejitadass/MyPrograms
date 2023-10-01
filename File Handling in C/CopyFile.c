#include<stdio.h>
#include<stdlib.h>
void main(){
    FILE *fp1,*fp2;
    fp1=fopen("abc.txt","r");
    fp2=fopen("xyz.txt","w");
    char ch;
    while(1)
    {
        ch=fgetc(fp1);
        if(ch==EOF)
            break;
        else
            fputc(ch,fp2);
    }
    fclose(fp1);
    fclose(fp2);
}