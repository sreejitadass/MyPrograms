#include<stdio.h>
#include<string.h>
int main()
{
    char ans='Y',s1[50],s2[50];
    int ch;
    do
    {
        printf("enter your choice\n");
        printf("1.Concatenate two strings without using the strcat function\n");
        printf("2.Concatenate two strings using the strcat function\n");
        printf("3.Compare two strings without using the strcmp function\n");
        printf("4.Compare two strings using the strcmp function\n");
        printf("5.Calculate the length of a string without using the strlen function\n");
        printf("6.Calculate the length of a string using the strlen function\n");
        printf("7.Copy one string to another string without using the strcpy function\n");
        printf("8.Copy one string to another string using the strcpy function\n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
            printf("enter first string: ");
            gets(s1);
            printf("enter second string: ");
            gets(s2);
            int len1=strlen(s1);
            int len2=strlen(s2);
            for(int i=0;i<=len2;i++)
                s1[len1+i]=s2[i];
            printf("concatenated string: %s",s1);
            break;

            case 2:
            printf("enter first string: ");
            gets(s1);
            printf("enter second string: ");
            gets(s2);
            strcat(s1,s2);
            printf("concatenated string: %s",s1);
            break;

            case 3:
            printf("enter first string: ");
            gets(s1);
            printf("enter second string: ");
            gets(s2);
            int flag=0;
            for(int i=0;s1[i]!='\0'||s2[i]!='\0';i++)
            {
                if(s1[i]!=s2[i])
                {
                    flag=1;
                    break;
                }
            }
            (flag==1)?printf("unequal strings"):printf("equal strings");
            break;

            case 4:
            printf("enter first string: ");
            gets(s1);
            printf("enter second string: ");
            gets(s2);
            int val=strcmp(s1,s2);
            (val==0)?printf("unequal strings"):printf("equal strings");
            break;

            case 5:
            printf("enter any string: ");
            gets(s1); 
            int i=0,len=0;
            while(s1[i]!='\0')
            {
                len++;
                i++;
            }  
            printf("Length of string is: %d",len);
            break;

            case 6:
            printf("enter any string: ");
            gets(s1);
            int length=strlen(s1);
            printf("Length of string is: %d",length);
            break;

            case 7:
            printf("enter the first string: ");
            gets(s1);
            printf("enter the second string: ");
            gets(s2);
            int l2=strlen(s2);
            for(int i=0;i<l2;i++);
                s2[i]=s1[i];
            printf("String after copying: %s",s2);
            break;

            case 8:
            printf("enter the first string: ");
            gets(s1);
            printf("enter the second string: ");
            gets(s2);
            strcpy(s1,s2);
            printf("String after copying: %s",s1);
            break;

            default:
            printf("wrong choice: ");
            }

            printf("Do you want to continue(Y/N)? ");
            scanf("%c",&ans);
        
    } while (ans=='Y');
    
}