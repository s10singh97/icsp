#include<stdio.h>

int main()
{
    int fib(int);
    int n, i = 0, c;
    printf("Enter the number\n");
    scanf("%d", &n);
    for (c = 1; c <= n; c++)
    {
      printf("%d\t", fib(i));
      i++;
    }
    printf("\n");
    return 0;
}

int fib(int n)
{
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else
    {
        return(fib(n - 1) + fib(n - 2));
    }
}