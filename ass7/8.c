#include<stdio.h>

int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);
    int *p, **q;
    p = &a;
    q = &p;
    printf("Value of a is %d\n", *p);
    printf("Address of a is %p\n", p);
    printf("Value of pointer p is %p\n", *q);
    printf("Address of pointer p is %p\n", q);
    printf("Value of a with respect to pointer q is %d\n", **q);
    return 0;
}