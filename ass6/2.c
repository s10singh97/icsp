#include<stdio.h>

int fac(int);
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    int fact = fac(n);
    printf("Factorial of %d = %d\n", n, fact);
    return 0;
}

int fac(int a)
{
    if(a == 1)
        return 1;
    else
        {
            int fact = a * fac(a - 1);
            return fact;
        }
}