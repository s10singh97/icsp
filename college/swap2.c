#include<stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers\n");
    scanf("%d\n%d", &a, &b);
    printf("Entered values are :\na is %d\nb is %d", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nSwapped values are:\na is %d\nb is %d\n", a, b);
    return 0;
}