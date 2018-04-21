#include<stdio.h>

int main()
{
    int a[5], i;
    printf("Enter 5 numbers\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    int t = a[0];
    for(i = 0; i < 4; i++)
    {
        a[i] = a[i + 1];
    }
    a[4] = t;
    for(i = 0; i < 5; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    return 0;
}