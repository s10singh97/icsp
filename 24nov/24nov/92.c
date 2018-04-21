#include<stdio.h>

int main()
{
    float fac(int);
    int n, i;
    float s = 0;
    printf("Enter a number\n");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        s = s + (float)(i / fac(i));
    }
    printf("%.2f\n", s);
    return 0;
}

float fac(int a)
{
    int fac = 1;
    while(a)
    {
        fac = fac * a;
        a--;
    }
    return fac;
}