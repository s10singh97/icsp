#include<stdio.h>

void swap(int*, int*);
int main()
{
    int a, b;
    printf("Enter two numbers\n");
    scanf("%d%d",&a, &b);
    printf("Before swapping\na = %d\nb = %d\n", a, b);
    swap(&a, &b);
    printf("After swapping\na = %d\nb = %d\n", a, b);
    return 0;
}

void swap(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}