#include<stdio.h>

int main()
{
    int a, b, c;
    printf("Enter two numbers\n");
    scanf("%d\n%d", &a, &b);
    printf("Entered values are :\na is %d\nb is %d", a, b);
    c = a;
    a = b;
    b = c;
    printf("\nSwapped values are:\na is %d\nb is %d\n", a, b);
    return 0;
}