#include<stdio.h>

void table(int);
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    table(n);
    return 0;
}

void table(int a)
{
    int i;
    for(i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", a, i, a*i);
    }
}