#include<stdio.h>

void gradeMath(int no_of_student,int no_of_sub,int subjectMatrix[no_of_sub][no_of_student])
{
        int c_math=0;
        for(int j=0;j<no_of_student;j++)
        {
            if(subjectMatrix[0][j]>=90 && subjectMatrix[0][j]<=100)
                c_math++;
        }
        printf("\nNumber of students with grade A in math: %d",c_math);
}

void HighestLowest(int no_of_student,int no_of_sub,int subjectMatrix[no_of_sub][no_of_student])
{
    int maxEnglish=subjectMatrix[2][0];
    int minHindi=subjectMatrix[3][0];
    for(int j=0;j<no_of_student;j++)
    {
        if(subjectMatrix[2][j]>maxEnglish)
            maxEnglish=subjectMatrix[2][j];
    }
    for(int j=0;j<no_of_student;j++)
    {
        if(subjectMatrix[3][j]<minHindi)
            minHindi=subjectMatrix[3][j];
    }
    printf("\nMaximum marks in English: %d", maxEnglish);
    printf("\nMinimum marks in Hindi: %d", minHindi);
}

void FailedStudents(int no_of_student,int no_of_sub,int subjectMatrix[no_of_sub][no_of_student])
{
    int c_fail=0,failed_sub=0;
    for(int j=0;j<no_of_student;j++)
    {
        for(int i=0;i<no_of_sub;i++)
        {
            if(subjectMatrix[i][j]>=0 && subjectMatrix[i][j]<=32)
                failed_sub++;
        }
        if(failed_sub>=3)
            c_fail++;
    }
    printf("\nNumber of failed students: %d",c_fail);
}

void Average(int no_of_student,int no_of_sub,int subjectMatrix[no_of_sub][no_of_student])
{
    double sumofmath,sumofsci,sumofeng,sumofhin;
    sumofmath=sumofsci=sumofeng=sumofhin=0.0;
    for(int j=0;j<no_of_student;j++)
    {
        sumofmath+=subjectMatrix[0][j];
        sumofsci+=subjectMatrix[1][j];
        sumofeng+=subjectMatrix[2][j];
        sumofhin+=subjectMatrix[3][j];
        
    }
    printf("\nMath average: %lg",(sumofmath/no_of_student));
    printf("\nScience average: %lg",(sumofsci/no_of_student));
    printf("\nEnglish average: %lg",(sumofeng/no_of_student));
    printf("\nHindi average: %lg",(sumofhin/no_of_student));
    printf("\nClass average: %lg",((sumofmath+sumofsci+sumofhin+sumofeng)/(no_of_sub*100)));
}

void Percentage(int no_of_student,int no_of_sub,int subjectMatrix[no_of_sub][no_of_student])
{
    double percent=0.0;
    int totalsum=0;
    for(int j=0;j<no_of_student;j++)
    {
        for(int i=0;i<no_of_sub;i++)
        {
            totalsum+=subjectMatrix[i][j];
            percent=(totalsum/(no_of_sub*100))*100;
        }
        printf("\nPercentage of student %d: %lg ",(j+1),percent);
        percent=0.0;
        totalsum=0;
    }
}

int main()
{
    int no_of_sub=4,no_of_student=50,highest=100,lowest=0;
    int subjectMatrix[no_of_sub][no_of_student];
    for(int i=0;i<no_of_sub;i++)               //0-->math,1-->science,2-->english,3-->hindi
    {
        for(int j=0;j<no_of_student;j++)
        {
            int num = (rand() % (highest - lowest + 1)) + lowest;
            subjectMatrix[i][j]=num;
        }
    }
    gradeMath(no_of_student,no_of_sub,subjectMatrix);  
    HighestLowest(no_of_student,no_of_sub,subjectMatrix);
    Average(no_of_student,no_of_sub,subjectMatrix);
    Percentage(no_of_student,no_of_sub,subjectMatrix);
    FailedStudents(no_of_student,no_of_sub,subjectMatrix);
}
