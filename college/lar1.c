#include<stdio.h>

int main()
{
    int a, b, c, max;
    printf("Enter 3 numbers\n");
    scanf("%d\n%d\n%d", &a, &b, &c);
    max = a;
    if(b > a)
    {
        if(c > b)
            max = c;
        else
            max = b;
    }
    printf("Largest number is %d\n", max);
    return 0;
}