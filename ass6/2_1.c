#include<stdio.h>

int sum(int);

int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    int s = sum(n);
    printf("The sum of the digits is %d\n", s);
    return 0;
}

int sum(int a)
{
    int s = 0;
    int d = a % 10;
    if(a < 10)
        return d;
    else
    {
        s = d + sum(a / 10);
        return s;
    }
}