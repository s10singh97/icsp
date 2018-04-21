#include<stdio.h>

int main()
{
    int a, d, i, j = 0, base = 1, oct = 0;
    char hex[100];
    printf("Enter a number whose Octal and Haxadecimal equivalent is to be calculated\n");
    scanf("%d", &a);
    int b = a;
    int c = b;
    while(a != 0)
    {
        d = a % 8;
        oct = oct + d * base;
        a = a / 8;
        base *= 10;
    }
    while(b != 0)
    {
        d = b % 16;
        if(d < 10)
        {
            hex[j] = d + 48;
            j++;
        }
        else
        {
            hex[j] = d + 55;
            j++;
        }
        b = b / 16;
    }
    printf("The Octal equivalent of %d is %d\n", c, oct);
    printf("The Hexaddecimal equivalent of %d is ", c);
    for(i = j; i >= 0; i--)
    {
        printf("%c", hex[i]);
    }
    printf("\n");
    return 0;
}