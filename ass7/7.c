#include<stdio.h>

int main()
{
    int a[6], i, s = 0, q = 0;
    printf("Enter 6 numbers\n");
    for(i = 0; i < 6; i++)
    {
        scanf("%d", &a[i]);
    }
    int *p;
    p = a;
    for(i = 0; i < 6; i++)
    {
        q += a[i];
    }
    printf("using array, the sum is : %d\n", q);
    for(i = 0; i < 6; i++) // using pointers
    {
        s += *(p + i);
    }
    printf("using pointer, the sum is : %d\n", s);
    return 0;
}