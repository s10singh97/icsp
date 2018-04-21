#include<stdio.h>

int main()
{
    char a;
    printf("Enter a character whose ASCII value has to be printed\n");
    scanf("%c", &a);
    int b = a;
    printf("ASCII value of %c is %d\n", a, b);
    return 0;
}