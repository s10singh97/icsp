#include<stdio.h>

int main()
{
    int *ptr, val = 10;
    ptr = &val;
    *ptr = *ptr * 2;
    printf("%d\n%p\n", val, ptr);
}