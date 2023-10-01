#include<stdio.h>
#include<string.h>
int main(){
struct S{
    int i;
    struct P{
        char c;
        union U{
            char c;
            float f;
        }U;
    }P;
}S;

//scan member variables
printf("\nFor struct S\n");
printf("\nEnter int variable: ");
scanf("%d",&S.i);
printf("\nFor struct P\n");
printf("\nEnter character variable: ");
scanf("%c",&S.P.c);
printf("\nFor union U\n");
printf("\nEnter character variable: ");
scanf("%c",&S.P.U.c);
printf("\nEnter float variable: ");
scanf("%f",&S.P.U.f);

//print the variables
printf("\nFor struct S\n");
printf("\nInt variable: %d",S.i);
printf("\nFor struct P\n");
printf("\nCharacter variable: %c",S.P.c);
printf("\nFor union U\n");
printf("\nCharacter variable: %c",S.P.U.c);
printf("\nFloat variable: %f",S.P.U.f);

}
