#include<stdio.h>
#include<stdlib.h>
void main(){
    FILE *fp;
    fp=fopen("abc.txt","r");
    char ch;
    int count_char=0,no_of_lines=1;
    ch=fgetc(fp);
    while(ch!=EOF)
    {
        count_char++;
        if(ch=='\n')
            no_of_lines++; 
        ch=fgetc(fp);      
    }
    printf("Number of characters in file: %d",count_char);
    printf("\nNumber of lines in file: %d",no_of_lines);
    fclose(fp);
}