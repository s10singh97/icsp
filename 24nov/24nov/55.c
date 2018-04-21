#include<stdio.h>

int main()
{
    int a[6], i, j;
    printf("Enter 6 elements\n");
    for(i = 0; i < 6; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 0, j = 1; i < 6; i += 2, j +=2)
    {
        int t = a[i];
        a[i] = a[j];
        a[j] = t;
    }
    for(i = 0; i < 6; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    return 0;
}