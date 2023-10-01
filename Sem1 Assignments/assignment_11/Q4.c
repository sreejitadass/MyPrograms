#include<stdio.h>
#include<string.h>
typedef struct student{
    char name[11];
    int roll;
    char sex;
    float gpa;
}student;

void printInstance(student s)
{
    printf("Name: %s\n",s.name);
    printf("Roll number: %d\n",s.roll);
    printf("Sex: %c\n",s.sex);
    printf("GPA: %.1f\n",s.gpa);
}

void printAddress(student s)
{
    printf("\nAddress of the instance: %p\n",&s);
    printf("Address of s.name: %p\n",&s.name);
    printf("Address of s.roll: %p\n",&s.roll);
    printf("Address of s.sex: %p\n",&s.sex);
    printf("Address of s.gpa: %p\n",&s.sex);
    printf("Structure size: %d\n",sizeof(s));
}

void printArray(student s)
{
    student arr[5];
    for(int i=0;i<5;i++)
    {
        printf("\nenter the name for student %d: ",i+1);
        gets(arr[i].name);
        printf("enter the roll number for student %d: ",i+1);
        scanf("%d",&arr[i].roll);
        printf("enter the sex for student %d: ",i+1);
        getc(arr[i].sex);
        printf("enter the GPA for student %d: ",i+1);
        scanf("%.1f",&arr[i].gpa);

    for(int i=0;i<5;i++)
    {
        printf("For student %d",i+1);
        printf("Name: %s\n",arr[i].name);
        printf("Roll number: %d\n",arr[i].roll);
        printf("Sex: %c\n",arr[i].sex);
        printf("GPA: %.1f\n",arr[i].gpa);
    }
    }
}

void printInstanceptr(student *s)
{
    printf("Name: %s\n",s->name);
    printf("Roll number: %d\n",s->roll);
    printf("Sex: %c\n",s->sex);
    printf("GPA: %.1f\n",s->gpa);
}

int main()
{
    student s;
    strcpy(s.name,"Sreejita");
    s.roll=2201201;
    s.sex='F';
    s.gpa=9.8;
    printInstance(s);
    printAddress(s);
    printArray(s);
    printInstanceptr(&s);
}
