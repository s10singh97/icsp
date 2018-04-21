#include<stdio.h>
#include<string.h>

int main()
{
    for(int i = 7; i != 0;i--)
    {
        printf("n = %d", i--);

        getchar();
    }
    return 0;
}