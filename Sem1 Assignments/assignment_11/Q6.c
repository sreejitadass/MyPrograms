#include<stdio.h>
int main(){
    typedef union U{
        char c;
        int i;
        float f;
        double d;
    }U;
    U ob1;
    printf("\nAddress of the object: %p",&ob1);
    printf("\nAddress of ob1.c: %p",&ob1.c);
    printf("\nAddress of ob1.i: %p",&ob1.i);
    printf("\nAddress of ob1.f: %p",&ob1.f);
    printf("\nAddress of ob1.d: %p",&ob1.d);

    printf("\nSize of the union: %d",sizeof(U));

    U ob2={0};
    ob2.c='S';
    printf("\nChar variable: %c",ob2.c);
    printf("\nInt variable: %d",ob2.i);
    printf("\nFloat variable: %f",ob2.f);
    printf("\nDouble variable: %lg",ob2.d);

    U ob3={0};
    ob3.i=60;
    printf("\nChar variable: %c",ob3.c);
    printf("\nInt variable: %d",ob3.i);
    printf("\nFloat variable: %f",ob3.f);
    printf("\nDouble variable: %lg",ob3.d);

    U *ptr;
    ptr=&ob3;
    ptr->c='F';
    ptr->d=54;
    ptr->f=6.2;
    ptr->d=8.99;

    return 0;
}