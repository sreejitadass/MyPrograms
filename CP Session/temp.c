#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int cycles,t,i,height=1,j;
    scanf("%d",&t);
    i=0;j=0;
    while(j<t)
    {
        scanf("%d",&cycles);
        height=1;
        if(cycles!=0)
        {
            i=1;
    while(i<=cycles)
    {
        if(i%2!=0)
            height*=2;
        else
            height+=1;
        i++;
    }
        }
        printf("%d\n",height);
        j++;
    }
    return 0;
}