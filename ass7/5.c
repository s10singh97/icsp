#include<stdio.h>

int main()
{
    const int a = 10;
    int *p;
    p = &a;
    *p = 20;
    printf("\n%d\n",a);
    return 0;
}