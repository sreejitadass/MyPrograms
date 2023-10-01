#include<stdio.h>
int main()
{
    printf("\nSource filename: %s"__FILE__);
    printf("\nDate of compilation: %s",__DATE__);
    printf("\nTime of compilation: %s",__TIME__);
    printf("\nFunction name: %s",__func__);
    printf("\nLine number: %d",__LINE__);
    return 0;
}