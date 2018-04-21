#include<stdio.h>

int main()
{
    int i, n, a[100], j = 0, k;
    printf("Enter a number\n");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            a[j++] = i;
        }
    }
    for(k = 1; k <= 10; k++)
    {
        for(i = 0; i < j; i++)
        {
            printf("%d x %d = %d\t", a[i], k, a[i]*k);
        }
        printf("\n");
    }
    return 0;
}