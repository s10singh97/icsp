#include<stdio.h>

int main()
{
    int *p = NULL; char *q = NULL; float *r = NULL; double *s = NULL;
    printf("Size of int pointer is %lu\n", sizeof(p));
    printf("Size of char pointer is %lu\n", sizeof(q));
    printf("Size of float pointer is %lu\n", sizeof(r));
    printf("Size of double pointer is %lu\n", sizeof(s));
    return 0;
}