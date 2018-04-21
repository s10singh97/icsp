#include<stdio.h>

int sum(int);
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    int s = sum(n);
    printf("Sum of first %d natural numbers  = %d\n", n, s);
    return 0;
}

int sum(int a)
{
    if(a == 1)
        return 1;
    else
    {
        int s = a + sum(a - 1);
        return s;
    }
}