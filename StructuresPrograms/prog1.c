#include<stdio.h>
#include<string.h>

int main(){

    //create data type Cricketer
    typedef struct Cricketer{
        char name[25];
        int age;
        int noOfMatches;
        float avgRuns;
    }Cricketer;

    Cricketer arr[3];

    //input elements in array
    for(int i=0;i<3;i++)
    {
        printf("Enter the name of Cricketer %d",i+1);
        gets(arr[i].name);
        printf("Enter the age of Cricketer %d",i+1);
        scanf("%d",&arr[i].age);
        printf("Enter the no of matches of Cricketer %d",i+1);
        scanf("%d",&arr[i].noOfMatches);
        printf("Enter the average number of runs of Cricketer %d",i+1);
        scanf("%f",&arr[i].avgRuns);
    }

    //print the elements
    for(int i=0;i<3;i++)
    {
        printf("For cricketer %d\n\n",i+1);
        printf("Name: %s",arr[i].name);
        printf("Age: %d",arr[i].age);
        printf("Number of matches: %d",arr[i].noOfMatches);
        printf("Average number of runs: %f",arr[i].avgRuns);
    }

    return 0;
}