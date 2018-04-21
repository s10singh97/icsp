//INVERTED TRIANGLE
#include<stdio.h>

int main()
{
    int i,j,n;
    printf("Enter number of rows\n");
    scanf("%d", &n);
    for(i = n; i >= 1; i--)
    {
        for(j = n - 1; j >= i; j--)
        {
            printf(" ");
        }
        for(j = 2*i - 1; j >= 1; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}