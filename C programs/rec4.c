#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i=0;
    i++;
    if(i<=5)
    {
        printf("hello");
        exit(0);
        main();
    }
    return 0;
}
