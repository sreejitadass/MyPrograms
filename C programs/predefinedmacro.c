#include<stdio.h>
int main()
{
    printf("Date: %s",__DATE__);
    printf("\nTime: %s",__TIME__);
    printf("\nFile: %s",__FILE__);
    printf("\nLine number: %d",__LINE__);
    printf("\nANSI: %d",__STDC__);
    return 0;
}