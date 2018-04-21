//1 232 345543
#include<stdio.h>

int main()
{
    int i ,j, n;
    printf("Enter the number of rows\n");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        for(j = n - 1; j >= i; j--)
        {
            printf(" ");
        }
        for(j = i; j <= 2*i - 1; j++)
        {
            printf("%d", j % 10);
        }
        for(j = j - 2; j >= i; j--)
        {
            printf("%d", j % 10);
        }
        printf("\n");
    }
}
