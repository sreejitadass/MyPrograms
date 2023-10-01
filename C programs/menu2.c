#include <stdio.h>
int main()
{
    int cls,noOfSub;
    printf("Enter your class\n");
    printf("A.First class\n");
    printf("B.Second class\n");
    printf("C.Third class\n");
    scanf("%c", &cls);
    printf("Enter no of subjects failed\n");
    scanf("%d", &noOfSub);
    switch(cls)
    {
    case('A'):
        switch(noOfSub)
        {
        case(3):
        case(2):
        case(1):
        case(0):
            printf("Grace marks=5\n");
            break;
        default:
            printf("No grace marks\n");

        }
        break;
        case('B'):
            switch(noOfSub)
            {
            case(2):
            case(1):
            case(0):
                printf("Grace marks=4\n");
                break;
            default:
                printf("No grace marks\n");

            }
            break;
        case('C'):
            switch(noOfSub)
            {
            case(1):
            case(0):
                printf("Grace marks=5\n");
                break;
            default:
                printf("No grace marks\n");
            }
            break;
        default:
            printf("Wrong choice\n");
            break;




    }
    return 0;

}
