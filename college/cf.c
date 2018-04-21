#include<stdio.h>

int main()
{
    float a;
    int f, c;
    printf("Enter the number whose ceil and floor value is required\n");
    scanf("%f", &a);
    int b = a;
    if(a > 0)
    {
        if(a - b == 0)
        {
            f = a;
            c = a;
        }
        else
        {
            f = a;
            c = a + 1;
        }
    }
    else
    {
        if(a - b == 0)
        {
            f = a;
            c = a;
        }
        else
        {
            f = a - 1;
            c = a;
        }
    }
    printf("Ceil value is %d\nFloor value is %d\n", c, f);
    return 0;
}