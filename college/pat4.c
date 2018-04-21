//FLOYD'S TRIANGLE
#include<stdio.h>

int main()
{
    int i, j, n, d = 1;
    printf("Enter the number of rows\n");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d\t", d);
            d += 1;
        }
        printf("\n");
    }
    return 0;
}