#include<stdio.h>

int main()
{
    int a;
    float b;
    char c;
    double d;
    printf("Enter the values :\n");
    scanf("%d\n%f\n%c\n%lf", &a, &b, &c, &d);
    printf("Size of %d is %lu\n", a, sizeof(a));
    printf("Size of %f is %lu\n", b, sizeof(b));
    printf("Size of %c is %lu\n", c, sizeof(c));
    printf("Size of %lf is %lu\n", d, sizeof(d));
    return 0;
}