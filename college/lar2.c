#include<stdio.h>

int main()
{
    int a, b, c, max;
    printf("Enter 3 numbers\n");
    scanf("%d\n%d\n%d", &a, &b, &c);
    max = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    printf("Largest number is %d\n", max);
    return 0;
}