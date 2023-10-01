#include<stdio.h>
#include<string.h>

//global declaration of structure
typedef struct Student{
    int roll;
    char name[30];
    char dept[15];
    char course[10];
    int yr;
}Student;

void Check(Student s1,Student s2)
{
    int val=strcmp(s1.dept,s2.dept);
    if(val==0)
        printf("Same Department");
    else
        printf("Different Departments");
}

int main()
{
    Student s1,s2;
    //student1
    strcpy(s1.name,"Tina");
    strcpy(s1.course,"CS101");
    strcpy(s1.dept,"Computer Science");
    s1.roll=120;
    s1.yr=2021;
    //student2
    strcpy(s2.name,"Julie");
    strcpy(s2.course,"MA102");
    strcpy(s2.dept,"Mathematics");
    s2.roll=103;
    s2.yr=2022;
    Check(s1,s2);
    return 0;
}