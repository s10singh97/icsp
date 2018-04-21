#include<stdio.h>

int main()
{
    int a[5], i;
    printf("Enter 5 elements\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    int *p;
    p = a;
    for(i = 0; i < 5; i++)
    {
        printf("Adddress of %d is %p\n", *(p + i), (p + i));
    }
    return 0;
}